[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
	<input type="hidden" name="task" value="group-result">
	<input type="hidden" name="action" value="search">
	<input type="hidden" name="dummy" value="">	
	<input type="hidden" name="__neuserdata" value="UPDATEDONE">
	<input type="hidden" name="__asusersort" value="1">
	<input type="hidden" name="max" value="10">
	<table class="table table-hover table-in-card" id="allusers">
		<tbody>
			<tr>
				<td colspan="2" class="bg-light text-right bt-0">
					<button type="submit" class="btn btn-success wp-150">
						<i class="fas fa-users"></i>
						display all
					</button>
				</td>
			</tr>
		</tbody>
	</table>
</form>