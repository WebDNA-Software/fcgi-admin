[!]
-- WebDNA fcgi admin include site toolbar01 --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<header class="dash-toolbar">
	<img src="[showif [pageid]=welcome]Admin/[/showif]assets/images/webdna-logo.png" height="40px">
	<div class="flush">
		<a href="[showif [pageid]=welcome]Admin/[/showif]flush-databases.dna" class=""><i class="fas fa-database"></i>Flush Databases</a>
		<a href="[showif [pageid]=welcome]Admin/[/showif]flush-cache.dna" class=""><i class="fas fa-server"></i>Flush Cache</a>
	</div>
	<div class="tools">
		<div class="dropdown tools-item">
			[hideif [pageid]=welcome]
			<span class="mr-2">[username]</span>
			<a href="#" class="mr-5" id="dropdownMenu1" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><i class="fas fa-user"></i></a>
			[/hideif]
		</div>
	</div>
	<a href="#" class="menu-toggle"><i class="fas fa-bars"></i></a>
</header>