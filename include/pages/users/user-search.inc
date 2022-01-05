[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
	<input type="hidden" name="task" value="search-user">
	<input type="hidden" name="action" value="search">
	<input type="hidden" name="dummy" value="">
	<input type="hidden" name="max" value="10">
	<table class="table table-hover table-in-card" id="searchusers">
		<tbody>
			<tr>
				<td class="text-right bg-light font-weight-bold">User name</td>
				<td><input class="w-100" type="text" name="__wouserdata" value=""></td>
			</tr>
			<tr>
				<td class="text-right bg-light font-weight-bold">Group</td>
				<td><input class="w-100" name="__wogroupsdata" type="text" value=""></td>
			</tr>
			<tr>
				<td colspan="2" class="bg-light text-right bt-0">
					<button type="submit" class="btn btn-success wp-150">
						<i class="fas fa-users"></i>
						search users
					</button>
				</td>
			</tr>
		</tbody>
	</table>
</form>