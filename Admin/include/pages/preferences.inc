[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
	<input type="hidden" name="command" value="AdminPut">
	<div class="row">
		<div class="col-lg-8 mb-2">
			<h2 class="dash-title">WebDNA Preferences</h2>
			[showif [command]=AdminPut]
				[replace db=[prefsDB]&eqPREFERENCEdata=PREFSUPDATE&append=T][!]
					[/!]preference=PREFSUPDATE&value=[date %a, %d %b, %Y] [time][!]
				[/!][/replace]
				<div class="alert alert-success mb-0" role="alert">
					<strong class="mr-2">Preferences have been saved</strong> [date %a, %d %b, %Y] [time]
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
					<div class="spur-card-title float-left">General</div>
				</div>
				<div class="card-body">
					<table class="table table-hover table-in-card" id="preferences">
						<tbody>
							<tr>
								<td class="bg-light text-center" width="5%"></td>
								<td class="text-right bg-light font-weight-bold" width="45%">Last update</td>
								<td>[lookup db=[PrefsDB]&lookInField=preference&value=PREFSUPDATE&returnField=value]</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#RequireTag')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Require tag on every page?</td>
								<td>
									<input type="radio" name="InterpretAll" value="F" [showif F=[lookup db=[PrefsDB]&lookInField=preference&value=InterpretAll&returnField=value]]checked[/showif]>&lt;!--HAS_WEBDNA_TAGS--&gt; Tag always required<br>
									<input type="radio" name="InterpretAll" value="T" [showif T=[lookup db=[PrefsDB]&lookInField=preference&value=InterpretAll&returnField=value]]checked[/showif]>Interpret WebDNA [xxx] tags on all pages
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="help.dna#date" target="_blank">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Date Display Format </td>
								<td>
									<input type="text" name="DateFormat" value="[lookup db=[PrefsDB]&lookInField=preference&value=DateFormat&returnField=value&notFound=%m/%d/%Y]">
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#Time')" target="_blank">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Time Display Format </td>
								<td>
									<input type="text" name="TimeFormat" value="[lookup db=[PrefsDB]&lookInField=preference&value=TimeFormat&returnField=value&notFound=%H:%M:%S]">
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#ReadDate')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Read Date Format </td>
								<td>
									<select class="select-css" name="ReadDateFormat">
										<option value="mdy" [showif mdy=[lookup db=[PrefsDB]&lookInField=preference&value=ReadDateFormat&returnField=value&notFound=mdy]]selected[/showif]>Month/Day/Year (American)</option>
										<option value="dmy" [showif dmy=[lookup db=[PrefsDB]&lookInField=preference&value=ReadDateFormat&returnField=value&notFound=mdy]]selected[/showif]>Day/Month/Year (European)</option>
										<option value="ymd" [showif ymd=[lookup db=[PrefsDB]&lookInField=preference&value=ReadDateFormat&returnField=value&notFound=mdy]]selected[/showif]>Year/Month/Day (Text-Sortable)</option>
									</select>
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#MathUseDateFormat')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Math to use Date Display Format? </td>
								<td>
									<select class="select-css" name="MathUseDateFormat">
										<option value="1" [showif 1=[lookup db=[PrefsDB]&lookInField=preference&value=MathUseDateFormat&returnField=value&notFound=0]]selected[/showif]>Yes</option>
										<option value="0" [showif 0=[lookup db=[PrefsDB]&lookInField=preference&value=MathUseDateFormat&returnField=value&notFound=0]]selected[/showif]>No</option>
									</select>
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#MaxFound')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Maximum Found Items</td>
								<td>
									<input type="text" name="MaxFound" value="[lookup db=[PrefsDB]&lookInField=preference&value=MaxFound&returnField=value&notFound=500]">
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#CenturyBreak')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Century Break </td>
								<td>
									<input type="text" name="CenturyBreak" value="[lookup db=[PrefsDB]&lookInField=preference&value=CenturyBreak&returnField=value&notFound=0]">
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#LimitThreads')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Maximum Number of Concurrent Threads </td>
								<td>
									<input type="text" name="LimitThreads" value=[lookup db=[PrefsDB]&lookInField=preference&value=LimitThreads&returnField=value&notFound=0]><br>
									0 = No Limit (Default = [showif [platform]=Macintosh]10[/showif][hideif [platform]=Macintosh]0[/hideif])
								</td>
							</tr>
							<tr>
								<td class="bg-light text-center">
									<a href="javascript:popUp('Help.dna#ZapNulls')">
										<i class="fas fa-question-circle"></i>
									</a>
								</td>
								<td class="text-right bg-light font-weight-bold">Filter Null Characters (Zap Gremlins)</td>
								<td>
									<select class="select-css" name="ZapNulls">
										<option value="1" [showif 1=[lookup db=[PrefsDB]&lookInField=preference&value=ZapNulls&returnField=value&notFound=0]]selected[/showif]>Yes</option>
										<option value="0" [showif 0=[lookup db=[PrefsDB]&lookInField=preference&value=ZapNulls&returnField=value&notFound=0]]selected[/showif]>No</option>
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