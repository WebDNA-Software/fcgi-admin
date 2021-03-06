[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<form action="[thisurl]" method="post">
	<input type="hidden" name="command" value="AdminPut">
	<div class="row">
		<div class="col-lg-8 mb-2">
			<h2 class="dash-title">WebDNA Certificates</h2>
			[showif [command]=AdminPut]
				[replace db=[prefsDB]&eqPREFERENCEdata=CERTIFICATESUPDATE&append=T][!]
					[/!]preference=CERTIFICATESUPDATE&value=[date %a, %d %b, %Y] [time][!]
				[/!][/replace]
				<div class="alert alert-success mb-0" role="alert">
					<strong class="mr-2">Certificates have been saved</strong> [date %a, %d %b, %Y] [time]
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
					<h3>WebDNA Certificates</h3>
				</div>
				<div class="card-body">
					<table class="table table-hover table-in-card" id="preferences">
						<tbody>
							<tr>
								<td colspan="2" class="text-right bg-light font-weight-bold">Last update</td>
								<td>[lookup db=[PrefsDB]&lookInField=preference&value=CERTIFICATESUPDATE&returnField=value]</td>
							</tr>
							<tr>
								<td class="bg-light text-center" width="5%"></td>
								<td class="text-right bg-light font-weight-bold" width="45%">WebDNA fcgi certificate</td>
								<td>
									<input type="text" name="SerialNumber" value="[showif [IsDeveloper]=F][lookup db=[PrefsDB]&lookInField=preference&value=SerialNumber&returnField=value&notFound=Freeware Mode][/showif]" placeholder="Purchase a WebDNA certificate">
								</td>
							</tr>
							[showif [ISACCELERATED]=t]
								<tr>
									<td class="alert-success text-center text-bold bt-0" colspan="3">
									 Your server is certified to use the WebDNA fcgi certificate for the domain: [listMIMEHeaders name=HTTP_HOST][value][/listMIMEHeaders]
									</td>
								</tr>
							[/showif]
							[hideif [ISACCELERATED]=t]
								<tr>
									<td class="bg-light text-danger text-center text-bold bt-0" colspan="3">
									 Your server is in "FREEWARE MODE" or the certificate entered is not allowed for the domain: [listMIMEHeaders name=HTTP_HOST][value][/listMIMEHeaders]
									</td>
								</tr>
							[/hideif]
							<tr>
								<td class="bg-light text-center"></td>
								<td class="text-right bg-light font-weight-bold">BioType Certificate</td>
								<td>
									<input type="text" name="BioTypeSerial" value="[showif [IsDeveloper]=F][lookup db=[PrefsDB]&lookInField=preference&value=BioTypeSerial&returnField=value&notFound=demo][/showif]" placeholder="Purchase a WebDNA BioType certificate">
								</td>
							</tr>
							[showif [ISBTLICENSED]=t]
								<tr>
									<td class="alert-success text-center text-bold bt-0" colspan="3">
									 Your server is certified to use the WebDNA BioType certificate for the domain: [listMIMEHeaders name=HTTP_HOST][value][/listMIMEHeaders]
									</td>
								</tr>
							[/showif]
							[hideif [ISBTLICENSED]=t]
								<tr>
									<td class="bg-light text-danger text-center text-bold bt-0" colspan="3">
									 Your server is in demo mode (one single user) for BioType
									</td>
								</tr>
							[/hideif]
							<tr>
								<td class="bg-light text-center"></td>
								<td class="text-right bg-light font-weight-bold">eCommerce Certificate</td>
								<td>
									<input type="text" name="eCommerceSerial" value="[showif [IsDeveloper]=F][lookup db=[PrefsDB]&lookInField=preference&value=eCommerceSerial&returnField=value&notFound=][/showif]" placeholder="Purchase a WebDNA eCommerce certificate">
								</td>
							</tr>
							[showif [ISECLICENSED]=t]
								<tr>
									<td class="alert-success text-center text-bold bt-0" colspan="3">
									 Your server is certified to use the WebDNA eCommerce certificate for the domain: [listMIMEHeaders name=HTTP_HOST][value][/listMIMEHeaders]
									</td>
								</tr>
							[/showif]
							[hideif [ISECLICENSED]=t]
								<tr>
									<td class="bg-light text-danger text-center text-bold bt-0" colspan="3">
									 You do not have an eCommerce certificate for the domain: [listMIMEHeaders name=HTTP_HOST][value][/listMIMEHeaders]
									</td>
								</tr>
							[/hideif]
						</tbody>
					</table>
				</div>
			</div>
		</div>
	</div>
</form>
[!]-------------------  -----------------[/!]
<div class="row mb-4">
	<div class="col-lg-12 text-center">
		<h5 class="mb-4">WebDNA fcgi certificates are based on the domain and all sub-domains for which the fcgi is configured.</h5>
		<a href="https://downloads.webdna.us/licence" class="btn btn-danger" target="_blank"><i class="fas fa-cloud-download-alt mr-2"></i>Purchase a WebDNA certificate here</a>
	</div>
</div>