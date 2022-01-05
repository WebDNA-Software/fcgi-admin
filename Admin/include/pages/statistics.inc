[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<h2 class="dash-title">Statistics</h2>
<p class="mb-4">This displays some basic statistics that WebDNA is reading from your hosting system.</p>
[!]-------------------  -----------------[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-chart-bar"></i></div>
				<div class="spur-card-title float-left">WebDNA Statistics</div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card">
          <tbody>
          	<tr>
							<td class="text-right bg-light font-weight-bold">Server date is</td>
							<td>[date]</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">Server time is</td>
							<td>[time]</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">WebDNA is currently in</td>
							<td>
								[switch value=[islicensed]]
									[case value=T]accelerated mode[/case]
									[default]freeware mode[/default]
								[/switch]
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">BioType is </td>
							<td>
								[switch value=[isbtlicensed]]
									[case value=T]activated[/case]
									[default]in demo mode (one single user)[/default]
								[/switch]
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">eCommerce is </td>
							<td>
								[switch value=[isEClicensed]]
									[case value=T]activated[/case]
									[default]is not licenced[/default]
								[/switch]
							</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">WebDNA is running as</td>
							<td>[platform] FastCGI version [version]</td>
						</tr>
						[hideif [platform]~Unix]
						<tr>
							<td class="text-right bg-light font-weight-bold">Memory available to [Product]</td>
							<td>
								[format thousands .0d][math]floor([freememory]/1024)[/math][/format] K
							</td>
						</tr>
						[/hideif]
						<tr>
							<td class="text-right bg-light font-weight-bold">You are accessing this page from ip address</td>
							<td>[realip]</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">Your browser is</td>
							<td>[browsername]</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">Your current username is</td>
							<td>[username]</td>
						</tr>
						<tr>
							<td class="text-right bg-light font-weight-bold">You came to this page from</td>
							<td>[referrer]</td>
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
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-chart-bar"></i></div>
				<div class="spur-card-title float-left">Your browser is sending the following MIME headers with each request:</div>
			</div>
			<div class="card-body">
				<table class="table table-hover table-in-card">
          <tbody>
          [listmimeheaders]
						<tr>
							<td class="text-right bg-light font-weight-bold">[name]</td>
							<td>[value]</td>
						</tr>
					[/listmimeheaders]
  				</tbody>
        </table>
			</div>
		</div>
	</div>
</div>
[!]-------------------  -----------------[/!]