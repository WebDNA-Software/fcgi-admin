[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<div class="row">
	<div class="col-lg-12 mb-2">
		<h2 class="dash-title-10">WebDNA Users Adminsitration</h2>

		[!]----- Error if trying to add a blank user -----[/!]
		[showif [user]=]
		<h3 class="dash-title text-danger">User name must not be empty.</h3>
		[/showif]

		[!]----- Error if trying to add a user with identical name -----[/!]
		[hideif [user]=]
			[hideif NotFound=[lookup db=Users.db&lookInField=user&value=[uppercase][user][/uppercase]&returnField=user&notFound=NotFound]]
				<h3 class="dash-title text-danger">"[user]" is already in the WebDNA Users.db database.</h3>
			[/hideif]

			[!]----- Warning if adding a user with an expired date -----[/!]
			[showif [expire_date]!]
				[showif [math]{[date]}[/math]>[math]{[expire_date]}[/math]]
					<h3 class="dash-title text-danger">"[user]" has already expired</h3>
				[/showif]
			[/showif]

			[!]----- Unique user, add to Users.db -----[/!]
			[showif NotFound=[lookup db=Users.db&lookInField=user&value=[uppercase][user][/uppercase]&returnField=user&notFound=NotFound]]
				[append Users.db][!]
					[/!]&user=[uppercase][user][/uppercase][!]
					[/!]&pass=[url][encrypt][uppercase][pass][/uppercase][/encrypt][/url][!]
					[/!]&groups=[uppercase][groups][/uppercase][!]
					[/!]&expire_date=[expire_date][!]
					[/!]&expire_del=[hideif [expire_date]=][expire_del][/hideif][!]
				[/!][/append]
				<h3 class="dash-title text-success">User "[user]" has been added to the WebDNA Users.db database.</h3>
			[/showif]

		[/hideif]

	</div>
</div>
[!]-----  -----[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-user"></i></div>
				<div class="spur-card-title float-left">New User</div>
			</div>
			<div class="card-body">
				[include file=include/pages/users/user-add.inc]
			</div>
		</div>
	</div>
</div>