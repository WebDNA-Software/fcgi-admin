[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
<input type="hidden" name="command" value="AdminPut">
<div class="row">
	<div class="col-lg-8 mb-2">
		<h2 class="dash-title">WebDNA Email Settings</h2>
		[showif [command]=AdminPut]
			[replace db=[prefsDB]&eqPREFERENCEdata=EMAILUPDATE&append=T][!]
				[/!]preference=EMAILUPDATE&value=[date %a, %d %b, %Y] [time][!]
			[/!][/replace]
			<div class="alert alert-success mb-0" role="alert">
				<strong class="mr-2">Email settings have been saved</strong> [date %a, %d %b, %Y] [time]
			</div>
		[/showif]
	</div>
	<div class="col-lg-4 mb-2 text-right">
		<button type="submit" class="btn btn-success"><i class="fas fa-envelope mr-2"></i> save</button>
	</div>
</div>

[!]-------------------  -----------------[/!]

<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-envelope"></i></div>
				<div class="spur-card-title float-left">Email Setup</div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card" id="preferences">
          <tbody>
          	<tr>
							<td class="text-right bg-light font-weight-bold" width="45%">Last update</td>
							<td>[lookup db=[PrefsDB]&lookInField=preference&value=EMAILUPDATE&returnField=value]</td>
						</tr>
          	<tr>
							<td class="text-right bg-light font-weight-bold">SMTP Mail Server</td>
							<td>
								<input name="POPMailServer" value="[lookup db=[PrefsDB]&lookInField=preference&value=POPMailServer&returnField=value&notFound=mail.yourdomain.com]" type="text" placeholder="Default localhost"><br>
								[hideif [platform]^Unix]
								You must set this before attempting to send any emails!<br>Typically this is the same mail server you use in Eudora's SMTP account preference
								[/hideif]
								[showif [platform]^Unix]
								This specifies your SMTP server.<br>Enter a remote SMTP server or 'localhost' if you want to use the local machine to send e-mails.
								[/showif]
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">SMTP Mail Server Port</td>
							<td>
								<input name="MailSMTPPort" value="[lookup db=[PrefsDB]&lookInField=preference&value=MailSMTPPort&returnField=value&notFound=25]" type="number" placeholder="Default is 25">
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">Enable Email Authentication</td>
							<td>
								[Text Show=F]MailAuthValid=[lookup db=[PrefsDB]&lookInField=preference&value=MailAuthValid&returnField=value&notFound=][/Text]
								<select name="MailAuthValid" class="select-css">
                  <option value="0" [showif 0=[MailAuthValid]]selected[/showif]>No</option>
                  <option value="1" [showif 1=[MailAuthValid]]selected[/showif]>Yes</option>
								</select>
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">Authentication Username</td>
							<td>
								<input name="MailAuthUser" value="[lookup db=[PrefsDB]&lookInField=preference&value=MailAuthUser&returnField=value&notFound=]" type="text" placeholder="Required if Email Authentication is 'Yes'">
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">Authentication Password</td>
							<td>
								<input name="MailAuthPassword" value="[Loop start=1&end=[CountChars][lookup db=[PrefsDB]&lookInField=preference&value=MailAuthPassword&returnField=value&notFound=][/CountChars]] [/Loop]" type="password" placeholder="Required if Email Authentication is 'Yes'">
							</td>
						</tr>
					</tbody>
				</table>
			</div>
		</div>
	</div>
</div>
[!]-------------------  -----------------[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-envelope"></i></div>
				<div class="spur-card-title float-left">The following information typically never changes</div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card" id="preferences">
          <tbody>
          	<tr>
							<td class="text-right bg-light font-weight-bold" width="45%">
								Outgoing Email Folder
							</td>
							<td>
								<input name="EMailFolder" value="[lookup db=[PrefsDB]&lookInField=preference&value=EMailFolder&returnField=value&notFound=:EMailFolder:]" type="text" placeholder="Default is EMailFolder/"><br>
								No need to change this unless you move the EMailer Application outside of WebDNA folder.
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">
								Completed Email Folder
							</td>
							<td>
								<input name="CompletedEMailFolder" value="[lookup db=[PrefsDB]&lookInField=preference&value=CompletedEMailFolder&returnField=value&notFound=:EMailCompleted:]" type="text" placeholder="Default is EMailCompleted/"><br>
								No need to change this unless you move the EMailer Application outside of WebDNA folder.
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">
								Email Log Folder
							</td>
							<td>
								<input name="EmailLogFolder" value="[lookup db=[PrefsDB]&lookInField=preference&value=EMailLogFolder&returnField=value&notFound=:EMailLog:]" type="text" placeholder="Default is EMailLog/"><br>
								No need to change this unless you move the EMailer Application outside of WebDNA folder.
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">
								Send Mail Every '[lookup db=[PrefsDB]&lookInField=preference&value=EMailSeconds&returnField=value&notFound=300]' ticks
							</td>
							<td>
								<input name="EmailSeconds" value="[lookup db=[PrefsDB]&lookInField=preference&value=EMailSeconds&returnField=value&notFound=300]" type="number"><br>
								Do not lower this number unless your mail server can handle a faster load.
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