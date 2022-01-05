[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<h2 class="dash-title text-danger">Warning</h2>
<div class="row">
	<p>WebDNA encrypts passwords in the Users.db database.</p>
	<p>You are seeing this message because WebDNA has determined that the passwords in Users.db have not been encrypted yet.</p>
	<p>In order to ensure that your administration pages and [raw][protect][/raw] tags work, it is necessary to encrypt the passwords now, by clicking the link below.</p>
	<p>Only the passwords will be encrypted -- the other fields will remain unchanged.</p>
	<p>Make a backup copy of your original Users.db file, before clicking the update link.</p>
</div>
<div class="row">
		<a href="update_users.dna[showif [passthru]=T]?username=[url][username][/url]&password=[url][password][/url][/showif]" class="btn btn-success">
		Encrypt Passwords in Users.db Now
		</a>
</div>