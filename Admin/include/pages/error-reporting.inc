[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
	<input type="hidden" name="command" value="AdminPut">
	<div class="row">
		<div class="col-lg-8 mb-2">
			<h2 class="dash-title">WebDNA Error Reporting</h2>
			[showif [command]=AdminPut]
				[replace db=[prefsDB]&eqPREFERENCEdata=ERRORSUPDATE&append=T][!]
					[/!]preference=ERRORSUPDATE&value=[date %a, %d %b, %Y] [time][!]
				[/!][/replace]
				<div class="alert alert-success mb-0" role="alert">
					<strong class="mr-2">Error reporting settings have been saved</strong> [date %a, %d %b, %Y] [time]
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
					<div class="spur-card-icon float-left mr-5"><i class="fas fa-exclamation-triangle"></i></div>
					<div class="spur-card-title float-left">Error Reporting</div>
				</div>
				<div class="card-body">
					<table class="table table-hover table-in-card" id="preferences">
						<tbody>
							<tr>
								<td class="bg-light text-center" width="5%"></td>
								<td class="text-right bg-light font-weight-bold" width="45%">Last update</td>
								<td>[lookup db=[PrefsDB]&lookInField=preference&value=ERRORSUPDATE&returnField=value]</td>
							</tr>
							[showif [platform]=Macintosh]
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#WebServerFolder')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Web Server Folder </td>
								<td>
									<input type="text" name="WebServerFolder" value="[lookup db=[PrefsDB]&lookInField=preference&value=WebServerFolder&returnField=value&notFound=../]">
								</td>
							</tr>
							[/showif]
							<tr>
								<td class="bg-light text-center" width="5%">
									<a href="javascript:popUp('Help.dna#TechSupport')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold" width="45%">Technical Support Information </td>
								<td><select class="select-css" name="DebugLevel">
										<option value="0" [showif [lookup db=[PrefsDB]&lookInField=preference&value=DebugLevel&returnField=value&notFound=0]=0]selected[/showif]>No</option>
										<option value="1" [showif [lookup db=[PrefsDB]&lookInField=preference&value=DebugLevel&returnField=value&notFound=]=1]selected[/showif]>Yes</option>
									</select>
								</td>
							</tr>
							[showif [platform]^unix]
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#CatchSignal')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Catching Terminate signal </td>
								<td><select class="select-css" name="CatchSignal">
										<option value="0" [showif [lookup db=[PrefsDB]&lookInField=preference&value=CatchSignal&returnField=value&notFound=0]=0]selected[/showif]>No</option>
										<option value="1" [showif [lookup db=[PrefsDB]&lookInField=preference&value=CatchSignal&returnField=value&notFound=]=1]selected[/showif]>Yes</option>
									</select>
								</td>
							</tr>
							[/showif]
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#LogError')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Log Error Messages </td>
								<td>
									<select class="select-css" name="LogError">
										<option value="1" [showif [lookup db=[PrefsDB]&lookInField=preference&value=LogError&returnField=value&notFound=]=1]selected[/showif]>Yes</option>
										<option value="0" [showif [lookup db=[PrefsDB]&lookInField=preference&value=LogError&returnField=value&notFound=0]=0]selected[/showif]>No</option>
									</select>
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#DisplayError')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Display Error Messages </td>
								<td>
									<select class="select-css" name="DisplayError">
										<option value="1" [showif [lookup db=[PrefsDB]&lookInField=preference&value=DisplayError&returnField=value&notFound=]=1]selected[/showif]>Yes</option>
										<option value="0" [showif [lookup db=[PrefsDB]&lookInField=preference&value=DisplayError&returnField=value&notFound=0]=0]selected[/showif]>No</option>
									</select>
								</td>
							</tr>
							[showif [platform]=Windows]
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#MIMEHeader')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">First MIME Header</td>
								<td>
									<input type="text" name="FirstMimeHeader" value="[lookup db=[PrefsDB]&lookInField=preference&value=FirstMimeHeader&returnField=value&notFound=]">
								</td>
							</tr>
							[/showif]
							[showif [platform]=Macintosh]
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#ThreadMem')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Memory for Threads </td>
								<td><select class="select-css" name="ThreadMem">
										<option value="0" [showif 0=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>Default</option>
										<option [showif 16=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>16</option>
										<option [showif 32=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>32</option>
										<option [showif 48=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>48</option>
										<option [showif 64=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>64</option>
										<option [showif 96=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>96</option>
										<option [showif 128=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>128</option>
										<option [showif 200=[lookup db=[PrefsDB]&lookInField=preference&value=ThreadMem&returnField=value&notFound=0]]selected[/showif]>200</option>
									</select>Kilobytes per thread
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#SSI')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Server Side Includes </td>
								<td>
									<select class="select-css" name="ProcessSSI">
										<option value="None" [showif [lookup db=[PrefsDB]&lookInField=preference&value=ProcessSSI&returnField=value&notFound=notFound]=notFound]selected[/showif]>None</option>
										<option value="Before" [showif [lookup db=[PrefsDB]&lookInField=preference&value=ProcessSSI&returnField=value&notFound=]=Before]selected[/showif]>Before</option>
										<option value="After" [showif [lookup db=[PrefsDB]&lookInField=preference&value=ProcessSSI&returnField=value&notFound=]=After]selected[/showif]>After</option>
										<option value="Before+After" [showif [lookup db=[PrefsDB]&lookInField=preference&value=ProcessSSI&returnField=value&notFound=]=Before+After]selected[/showif]>Before+After</option>
									</select>
								</td>
							</tr>
							[/showif]

						</tbody>
					</table>
				</div>
			</div>
		</div>
	</div>
	[!]-------------------  -----------------[/!]
</form>