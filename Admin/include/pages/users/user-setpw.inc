[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post" id="setpass">
	<input type="hidden" name="task" value="save-pw">
	<input type="hidden" name="user" value="[uppercase][user][/uppercase]">
	<table class="table table-hover table-in-card">
		<tbody>
			<tr>
				<td class="text-right bg-light font-weight-bold w-50">User name</td>
				<td class="w-50"><b>[uppercase][user][/uppercase]</b></td>
			</tr>
			<tr>
				<td class="text-right bg-light font-weight-bold">New Password</td>
				<td><input class="w-100" type="text" name="newpass" value="" id="pass1"></td>
			</tr>
			<tr>
				<td class="text-right bg-light font-weight-bold">Verify Password</td>
				<td><input class="w-100" type="text" name="verify" value="" id="pass2"></td>
			</tr>
			<tr>
				<td class="bg-light bt-0">
					<div class="alert-danger text-center p-2 d-none" id="errormessage">can you see me?</div>
				</td>
				<td class="bg-light text-right bt-0">
 					<button type="submit" class="btn btn-success">
						<i class="fas fa-user-secret mr-2"></i>
						save user password
					</button>
				</td>
			</tr>
		</tbody>
	</table>
</form>