[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
	<input type="hidden" name="task" value="save-user">
	<table class="table table-hover table-in-card" id="newusers">
		<tbody>
			<tr>
				<td class="text-right bg-light font-weight-bold">User name</td>
				<td><input class="w-100" type="text" name="user" value="[user]"></td>
			</tr>
			<tr>
				<td class="text-right bg-light font-weight-bold">Groups</td>
				<td><textarea class="w-100" name="groups" rows="4">[input][groups][/input]</textarea></td>
			</tr>
			<tr>
				<td class="text-right bg-light font-weight-bold">Expire date</td>
				<td><input class="w-100" type="text" name="expire_date" value="[expire_date]"></td>
			</tr>
			<tr >
				<td class="text-right bg-light font-weight-bold">Delete on expire</td>
				<td>
					<select class="select-css w-100 mw-100" name="expire_del">
						<option value="F" [showif [expire_del]=F]SELECTED[/showif]>No</option>
						<option value="T" [showif [expire_del]=T]SELECTED[/showif]>Yes</option>
					</select>
				</td>
			</tr>
			<tr>
				<td colspan="2" class="bg-light text-right bt-0">
					<button type="submit" class="btn btn-success">
						<i class="fas fa-user"></i>
						save user
					</button>
				</td>
			</tr>
		</tbody>
	</table>
</form>