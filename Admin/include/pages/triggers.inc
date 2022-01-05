[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
[text]varERRORMESSAGE=[/text]

[!]------------------- ADD -----------------[/!]

[showif [task]=add]
	[hideif [url][__executeurl][/url]=]
		[append db=../Triggers.db&autonumber=SKU][!]
			[/!]&Param=[convertchars db=data/stripspaces.db][param1][/convertchars] [convertchars db=data/stripspaces.db][param2][/convertchars] [convertchars db=data/stripspaces.db][param3][/convertchars] [convertchars db=data/stripspaces.db][param4][/convertchars] [convertchars db=data/stripspaces.db][param5][/convertchars] [convertchars db=data/stripspaces.db][param6][/convertchars][!]
			[/!]&[formvariables name=__&exact=F][getchars start=3][name][/getchars]=[url][value][/url]&[/formvariables][!]
		[/!][/append]
		[commitdatabase db=../Triggers.db]
	[/hideif]
	[showif [url][__executeurl][/url]=][text]varERRORMESSAGE=Trigger was not saved, you must add an <b>Execute URL</b> to save a trigger[/text][/showif]
[/showif]

[!]------------------- CHANGE -----------------[/!]

[showif [task]=change]
	[hideif [url][__executeurl][/url]=]
		[replace db=../Triggers.db&eqSKUdatarq=[sku]][!]
			[/!]&Param=[convertchars db=data/stripspaces.db][param1][/convertchars] [convertchars db=data/stripspaces.db][param2][/convertchars] [convertchars db=data/stripspaces.db][param3][/convertchars] [convertchars db=data/stripspaces.db][param4][/convertchars] [convertchars db=data/stripspaces.db][param5][/convertchars] [convertchars db=data/stripspaces.db][param6][/convertchars][!]
			[/!]&[formvariables name=__&exact=F][getchars start=3][name][/getchars]=[url][value][/url]&[/formvariables][!]
		[/!][/replace]
	[/hideif]
	[commitdatabase db=../Triggers.db]
	[showif [url][__executeurl][/url]=][text]varERRORMESSAGE=Trigger was not saved, you must add an <b>EXECUTE URL</b> to save a trigger[/text][/showif]
[/showif]

[!]------------------- DELETE -----------------[/!]

[showif [task]=delete]
	[delete db=../Triggers.db&eqSKUdatarq=[sku]]
	[commitdatabase db=../Triggers.db]
	[text]varERRORMESSAGE=Trigger was <b>DELETED</b>[/text]
[/showif]

[!]-------------------  -----------------[/!]

[hideif [task]=new]
	[hideif [task]=edit]
		<div class="row">
			<div class="col-lg-8 mb-2">
				<h2 class="dash-title">
					WebDNA Triggers
					[hideif [raw][task][/raw]=[task]] - [!]
						[/!][if ("[url][varERRORMESSAGE][/url]"="")][!]
							[/!][then][task][/then][!]
							[/!][else][!]
								[/!][if ("[task]"="delete")][!]
									[/!][then]deleted[/then][!]
									[/!][else]error[/else][!]
								[/!][/if][!]
							[/!][/else][!]
						[/!][/if][!]
					[/!][/hideif]
				</h2>
			</div>
			<div class="col-lg-4 mb-2 text-right">
				<form method="post" action="[thisurl]">
					<input type="hidden" name="task" value="new">
					<button type="submit" class="btn btn-success"><i class="fas fa-clock mr-2"></i> new trigger</button>
				</form>
			</div>
		</div>
		[hideif [url][varERRORMESSAGE][/url]=]
		<div class="row">
			<div class="col-lg-12 mb-2">
				<div class="alert-danger p-4 mb-4 text-center">[varERRORMESSAGE]</div>
			</div>
		</div>
		[/hideif]
		[!]-------------------  -----------------[/!]
		<div class="row mb-4">
			<div class="col-lg-12 mb-2">
				<table class="table table-hover table-in-card bg-white" id="triggers">
					<tbody>
						[search db=../Triggers.db&neSKUdatarq=find_all&rank=off]
							[founditems]
								<tr>
									<td width="12%">
										<form method="post" action="[thisurl]" id="edit[index]">
											<input type="hidden" name="task" value="edit">
											<input type="hidden" name="sku" value="[sku]">
											<button class="btn btn-primary" type="submit">Edit/Delete</button>
										</form>
									</td>
									<td class="align-self-center">[listfields db=../Triggers.db][interpret][[fieldname]][/interpret] [/listfields]</td>
								</tr>
							[/founditems]
						[/search]
					</tbody>
				</table>
			</div>
		</div>
	[/hideif]
[/hideif]

[!]-------------------  -----------------[/!]

[showif [task]=new]
<form method="post" action="[thisurl]">
	<input type="hidden" name="task" value="add">
	<div class="row">
		<div class="col-lg-8 mb-2">
			<h2 class="dash-title">Add a new trigger</h2>
		</div>
		<div class="col-lg-4 mb-2 text-right">
			<button type="submit" class="btn btn-success"><i class="fas fa-clock mr-2"></i> save</button>
		</div>
	</div>
	<div class="row mb-4">
		<div class="col-lg-12 mb-2">
			<input type="hidden" name="task" value="add">
			<table class="table table-hover table-in-card bg-white" id="triggers">
				<tbody>
					[include file=include/pages/triggers-admin.inc&trigger=TIME&Param=* * * * * 5&NextExecute=[url][date %Y/%m/%d %H:%M:%S][/url]&Enable=T&ExecuteURL=&User=&Pass=&WasGood=<html>&TimeoutSeconds=30&RetrySeconds=10]
				</tbody>
			</table>
		</div>
	</div>
</form>
[/showif]

[!]-------------------  -----------------[/!]

[showif [task]=edit]
	[search db=../Triggers.db&eqSKUdatarq=[sku]]
		[founditems]
			<form method="post" action="[thisurl]">
				<input type="hidden" name="sku" value="[sku]">
				<div class="row">
					<div class="col-lg-8 mb-2">
						<h2 class="dash-title">Edit this trigger</h2>
					</div>
					<div class="col-lg-4 mb-2 text-right">
						<button type="submit" class="btn btn-success" name="task" value="change"><i class="fas fa-clock mr-2"></i> save</button>
						<button type="submit" class="btn btn-danger" name="task" value="delete"><i class="fas fa-trash-alt mr-2"></i> delete</button>
					</div>
				</div>
				<div class="row mb-4">
					<div class="col-lg-12 mb-2">
						<table class="table table-hover table-in-card bg-white" id="triggers">
							<tbody>
								[include file=include/pages/triggers-admin.inc]
							</tbody>
						</table>
					</div>
				</div>
			</form>
		[/founditems]
	[/search]
[/showif]