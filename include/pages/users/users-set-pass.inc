[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<div class="row">
	<div class="col-lg-12 mb-2">
		<h2 class="dash-title">WebDNA Users Adminsitration</h2>
	</div>
</div>
[!]-----  -----[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-user-secret"></i></div>
				<div class="spur-card-title float-left">Set User Password</div>
			</div>
			<div class="card-body">
				[search db=Users.db&eqUSERdata=[user]&max=1]
					[founditems]
						[include file=include/pages/users/user-setpw.inc]
					[/founditems]
				[/search]
			</div>
		</div>
	</div>
</div>