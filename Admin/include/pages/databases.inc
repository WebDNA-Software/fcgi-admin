[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<h2 class="dash-title">Currently-Open WebDNA Databases</h2>
<div class="row">
	<div class="col-lg-4 mb-2">
		<form method="post" action="databases.dna">
			<input type="hidden" name="action" value="flush">
			<button type="submit" class="btn btn-warning">Commit and Close all Databases</button>
		</form>
	</div>
	<div class="col-lg-8 mb-2">
		[showif [action]=flush]
			<div class="alert alert-success mb-0" role="alert">
				<strong>Databases have been flushed</strong>
			</div>
		[/showif]
	</div>
</div>
[!]-------------------  -----------------[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-database"></i></div>
				<div class="spur-card-title float-left">WebDNA Databases</div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card">
					<thead>
						<th>Database Specs</th>
						<th>Field Names</th>
					</thead>
          <tbody>
						[LISTDATABASES]
							<tr>
								<td class="text-right bg-pale font-weight-bold">
									[listwords words=[NAME]&delimiters=/\][delimiter][word][showif [index]\4]<br>[/showif][/listwords]<br>
									[NUMRECORDS] records,<br>
									using [format thousands 0d][math][MEMORYUSAGE]/1024[/math][/format]K of RAM<br>
									[NUMFIELDS] fields
								</td>
								<td>[ListFields path=[name]][FIELDNAME], [/ListFields]</td>
							</tr>
						[/LISTDATABASES]
					</tbody>
        </table>
			</div>
		</div>
	</div>
</div>
[!]-------------------  -----------------[/!]