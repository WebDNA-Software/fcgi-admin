[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<div class="row">
	<div class="col-lg-12 mb-2">
		<h2 class="dash-title">WebDNA Users Adminsitration</h2>
		<p>Administer the list of users who are allowed to access your site or sections of your site. By using the tag [raw][protect groups=group1,group2,group3][/raw] at the top of a template file, users who do not belong to those groups will be prevented from seeing those pages. Using [raw][protect groups=admin][/raw] at the top of a page will only let administrators see that page.</p>
		<p>Groups can be created with any name, however the "ADMIN" group is treated as a special group that allows people who are administrators to make changes to WebDNA's preferences.</p>
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
[!]-----  -----[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-users"></i></div>
				<div class="spur-card-title float-left">Search Users</div>
			</div>
			<div class="card-body">
				[include file=include/pages/users/user-search.inc]
			</div>
		</div>
	</div>
</div>
[!]-----  -----[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-users"></i></div>
				<div class="spur-card-title float-left">Display All Users</div>
			</div>
			<div class="card-body">
				[include file=include/pages/users/user-all.inc]
			</div>
		</div>
	</div>
</div>