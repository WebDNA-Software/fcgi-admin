[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
[text]verENGINE=[!]
	[/!][tcpconnect host=version.webdna.us&port=443&ssl=T][!]
		[/!][tcpsend skipheader=t][!]
			[/!]POST /o/l/f HTTP/1.0[unurl]%0D%0A[/unurl][!]
			[/!]Host: version.webdna.us[unurl]%0D%0A[/unurl][!]
			Connection: close[unurl]%0D%0A[/unurl]
			[/!][UnURL]%0D%0A%0D%0A[/UnURL][!]
		[/!][/tcpsend][!]
	[/!][/tcpconnect][!]
[/!][/text]
[text]verWEBDNAROOT=[!]
	[/!][tcpconnect host=version.webdna.us&port=443&ssl=T][!]
		[/!][tcpsend skipheader=t][!]
			[/!]POST /f/f/g HTTP/1.0[unurl]%0D%0A[/unurl][!]
			[/!]Host: version.webdna.us[unurl]%0D%0A[/unurl][!]
			Connection: close[unurl]%0D%0A[/unurl]
			[/!][UnURL]%0D%0A%0D%0A[/UnURL][!]
		[/!][/tcpsend][!]
	[/!][/tcpconnect][!]
[/!][/text]
[text]verWEBDNAADMIN=[!]
	[/!][tcpconnect host=version.webdna.us&port=443&ssl=T][!]
		[/!][tcpsend skipheader=t][!]
			[/!]POST /f/f/a HTTP/1.0[unurl]%0D%0A[/unurl][!]
			[/!]Host: version.webdna.us[unurl]%0D%0A[/unurl][!]
			Connection: close[unurl]%0D%0A[/unurl]
			[/!][UnURL]%0D%0A%0D%0A[/UnURL][!]
		[/!][/tcpsend][!]
	[/!][/tcpconnect][!]
[/!][/text]
<h2 class="dash-title">WebDNA Updates</h2>
<div class="row mb-4">
	<div class="col-lg-4">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-title float-left"><h3>WebDNA Engine</h3></div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card" id="preferences">
          <tbody>
          	<tr>
							<td class="bg-light font-weight-bold">Installed Version</td>
							<td>[VERSION]</td>
						</tr>
						<tr>
							<td class="bg-light font-weight-bold">Latest Version</td>
							<td>[verENGINE]</td>
						</tr>
					</tbody>
				</table>
			</div>
		</div>
	</div>
	<div class="col-lg-4">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-title float-left"><h3>WebDNA fcgi directory</h3></div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card" id="preferences">
          <tbody>
          	<tr>
							<td class="bg-light font-weight-bold">Installed Version</td>
							<td>[include file=include/site/version-fcgi.ini]</td>
						</tr>
						<tr>
							<td class="bg-light font-weight-bold">Latest Version</td>
							<td>[verWEBDNAROOT]</td>
						</tr>
					</tbody>
				</table>
			</div>
		</div>
	</div>
	<div class="col-lg-4">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-title float-left"><h3>WebDNA admin directory</h3></div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card" id="preferences">
          <tbody>
          	<tr>
							<td class="bg-light font-weight-bold">Installed Version</td>
							<td>[include file=include/site/version-admin.ini]</td>
						</tr>
						<tr>
							<td class="bg-light font-weight-bold">Latest Version</td>
							<td>[verWEBDNAADMIN]</td>
						</tr>
					</tbody>
				</table>
			</div>
		</div>
	</div>
</div>
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-title float-left"><h3>WebDNA update and upgrades</h3></div>
			</div>
			<div class="card-body text-center">
				<a href="https://www.webdna.us/page.dna?numero=1032" class="btn btn-danger" target="_blank"><i class="fas fa-cloud-download-alt mr-2"></i>All WebDNA downloads available here</a>
			</div>
		</div>
	</div>
</div>