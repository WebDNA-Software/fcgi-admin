[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<table class="table table-hover table-in-card" id="results">
	[hideif [numfound]=0]
		<tr>
			<th>Username</th><th>Groups</th><th class="text-center">Expire Date</th><th class="text-center">Delete on Expire</th><th colspan="3" class="text-center">Actions</th>
		</tr>
	[/hideif]
	[foundItems]
		<tr>
			<td>[user]</td>
			<td>[convertchars db=data/conversions.db][groups][/convertchars]</td>
			<td class="text-center">[showif [expire_date]=]None[/showif][hideif [expire_date]=][expire_date][/hideif]</td>
			<td class="text-center">[showif [expire_date]=]N/A[/showif][hideif [expire_del]=][showif [expire_del]=T]Yes[/showif][hideif [expire_del]=T]No[/hideif][/hideif]</td>
			<td class="px-1 text-center">
				<form action="[thisurl]" method="post">
					<input type="hidden" name="task" value="delete-user">
					<input type="hidden" name="dummy" value="">
					<input type="hidden" name="user" value="[url][user][/url]">
					
					<input type="hidden" name="__neuserdata" value="UPDATEDONE">
					
					<button type="submit" class="btn btn-danger py-1"><i class="fas fa-trash"></i></button>
				</form>
			</td>
			<td class="px-1 text-center">
				<form action="[thisurl]" method="post">
					<input type="hidden" name="task" value="edit-user">
					<input type="hidden" name="dummy" value="">
					<input type="hidden" name="user" value="[url][user][/url]">
					<button type="submit" class="btn btn-primary py-1"><i class="fas fa-pen"></i></button>
				</form>
			</td>
			<td class="px-1 text-center">
				<form action="[thisurl]" method="post">
					<input type="hidden" name="task" value="set-pw">
					<input type="hidden" name="dummy" value="">
					<input type="hidden" name="user" value="[url][user][/url]">
					<button type="submit" class="btn btn-success py-1"><i class="fas fa-key"></i></button>
				</form>
			</td>
		</tr>
	[/foundItems]
</table>