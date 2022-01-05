[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<div class="row">
	<div class="col-lg-12 mb-2">
		<h2 class="dash-title">WebDNA User Search Results</h2>
	</div>
</div>
[search db=Users.db&max=[varMAX]&startat=[start]&[formvariables name=__&exact=f][getchars start=3][name][/getchars]=[url][value][/url]&[/formvariables]]
	<div class="row mb-4">
		<div class="col-lg-12">
			<div class="card spur-card">
				<div class="card-header bg-danger text-white">
					<div class="spur-card-icon float-left mr-5"><i class="fas fa-users"></i></div>
					<div class="spur-card-title float-left">[numFound] Users Found</div>
				</div>
				<div class="card-body">
					[include file=include/pages/users/search-results.inc]
					<div class="btn-group mr-2 mb-1 mt-4 float-right">
						[shownext]                                  
							<form action="[thisurl]" method="post">
								<input type="hidden" name="task" value="[task]">
								<input type="hidden" name="dummy" value="">
								<input type="hidden" name="__neuserdata" value="UPDATEDONE">
								<input type="hidden" name="__asusersort" value="1">
								<input type="hidden" name="start" value="[start]">
								<button type="submit" class="btn btn-secondary p-1">[start]-[end]</button>
							</form>                        
						[/shownext]                                
          </div>
				</div>
			</div>
		</div>
	</div>
[/search]
[!]-----  -----[/!]
<div class="row mb-4">
	<div class="col-lg-12">
		<div class="card spur-card">
			<div class="card-header bg-danger text-white">
				<div class="spur-card-icon float-left mr-5"><i class="fas fa-users"></i></div>
				<div class="spur-card-title float-left">Search Users</div>
			</div>
			<div class="card-body">
				[include file=include/pages/users/user-search.inc]
			</div>
		</div>
	</div>
</div>