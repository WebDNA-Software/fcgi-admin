[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
	<input type="hidden" name="command" value="AdminPut">
	<div class="row">
		<div class="col-lg-8 mb-2">
			<h2 class="dash-title">WebDNA Performance</h2>
			[showif [command]=AdminPut]
				[replace db=[prefsDB]&eqPREFERENCEdata=PERFORMANCEUPDATE&append=T][!]
					[/!]preference=PERFORMANCEUPDATE&value=[date %a, %d %b, %Y] [time][!]
				[/!][/replace]
				<div class="alert alert-success mb-0" role="alert">
					<strong class="mr-2">Performance settings have been saved</strong> [date %a, %d %b, %Y] [time]
				</div>
			[/showif]
		</div>
		<div class="col-lg-4 mb-2 text-right">
			<button type="submit" class="btn btn-success"><i class="fas fa-check mr-2"></i> save</button>
		</div>
	</div>
	[!]-------------------  -----------------[/!]
	<div class="row mb-4">
		<div class="col-lg-12">
			<div class="card spur-card">
				<div class="card-header bg-danger text-white">
					<div class="spur-card-icon float-left mr-5"><i class="fas fa-cog"></i></div>
					<div class="spur-card-title float-left">Performance</div>
				</div>
				<div class="card-body">
					<table class="table table-hover table-in-card" id="preferences">
						<tbody>
							<tr>
								<td class="bg-light text-center" width="5%"></td>
								<td class="text-right bg-light font-weight-bold" width="45%">Last update</td>
								<td>[lookup db=[PrefsDB]&lookInField=preference&value=PERFORMANCEUPDATE&returnField=value]</td>
							</tr>
							<tr>
								<td class="bg-light text-center" width="5%">
									<a href="javascript:popUp('Help.dna#TemplateCaching')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold" width="45%">Template Caching </td>
								<td>
									<input type="radio" name="CacheTemplates" value="F" [showif F=[lookup db=[PrefsDB]&lookInField=preference&value=CacheTemplates&returnField=value]]checked[/showif]>Don't Cache Templates<br>
									<input type="radio" name="CacheTemplates" value="T" [showif T=[lookup db=[PrefsDB]&lookInField=preference&value=CacheTemplates&returnField=value]]checked[/showif]>Cache Templates
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#CheckCache')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Check for template modifications every</td>
								<td>
									<input type="text" name="CheckTemplateInterval" value="[lookup db=[PrefsDB]&lookInField=preference&value=CheckTemplateInterval&returnField=value&notFound=]">seconds
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#Commit')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Commit Databases </td>
								<td>
									<input type="radio" name="AutoCommit" value="F" [showif F=[lookup db=[PrefsDB]&lookInField=preference&value=AutoCommit&returnField=value]]checked[/showif]>Only commit databases to disk when instructed<br>
									<input type="radio" name="AutoCommit" value="T" [showif T=[lookup db=[PrefsDB]&lookInField=preference&value=AutoCommit&returnField=value]]checked[/showif]>Commit databases after modification
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#BusyDB')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Seconds to wait for busy database </td>
								<td>
									<input type="text" name="DeadlockSeconds" value="[lookup db=[PrefsDB]&lookInField=preference&value=DeadlockSeconds&returnField=value&notFound=]">
								</td>
							</tr>
							[showif [platform]=Macintosh]
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#ThreadSwitch')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Ticks between thread switches</td>
								<td>
									<input name="ThreadSwitchTicks" value="[lookup db=[PrefsDB]&lookInField=preference&value=ThreadSwitchTicks&returnField=value&notFound=]">
								</td>
							</tr>
							[/showif]
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#SafeWriteDatabase')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Safe Write for database</td>
								<td>
									<select class="select-css" name="SafeWriteDatabase">
										<option value="0" [showif [lookup db=[PrefsDB]&lookInField=preference&value=SafeWriteDatabase&returnField=value&notFound=0]=0]selected[/showif]>No</option>
										<option value="1" [showif [lookup db=[PrefsDB]&lookInField=preference&value=SafeWriteDatabase&returnField=value&notFound=]=1]selected[/showif]>Yes</option>
									</select>
								</td>
							</tr>

						</tbody>
					</table>
				</div>
			</div>
		</div>
	</div>
	[!]-------------------  -----------------[/!]
</form>