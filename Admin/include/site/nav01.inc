[!]
-- WebDNA fcgi admin site nav01 --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
[text]varCONFIGLIST=|preferences|performance|security|error-reporting|triggers|email-settings|[/text]
[text]varSYSLIST=|statistics|databases|[/text]
[text]varSECLIST=|users|[/text]
[showif [varCONFIGLIST]^|[PAGEID]|]
	[text]varSECTION=config[/text]
[/showif]
[showif [varSYSLIST]^|[PAGEID]|]
	[text]varSECTION=system[/text]
[/showif]
[showif [varSECLIST]^|[PAGEID]|]
	[text]varSECTION=security[/text]
[/showif]
<div class="dash-nav dash-nav-dark">
	[!]------------------- BRANDING -----------------[/!]
	<header>
		<a href="#!" class="menu-toggle">
			<i class="fas fa-bars"></i>
		</a>
		<a href="index.html" class="webdna-logo">
			<span>WebDNA fcgi [VERSION]</span>
		</a>
	</header>
	[!]------------------- NAVIGATION -----------------[/!]
	<nav class="dash-nav-list">
		<a href="[hideif [PAGEID]=welcome]../[/hideif]index.html" class="dash-nav-item[showif [PAGEID]=welcome] nav-on[/showif]">
			<i class="fas fa-door-open"></i> Welcome
		</a>
		<a href="[showif [PAGEID]=welcome]Admin/[/showif]certificates.dna" class="dash-nav-item[showif [PAGEID]=certificates] nav-on[/showif]">
			<i class="fas fa-check-circle"></i> WebDNA Certificates
		</a>
		<a href="[showif [PAGEID]=welcome]Admin/[/showif]updates.dna" class="dash-nav-item[showif [PAGEID]=updates] nav-on[/showif]">
			<i class="fas fa-cloud-download-alt"></i> WebDNA Updates
		</a>
		<div class="dash-nav-dropdown[showif [varSECTION]=config] show[/showif]">
			<a href="#!" class="dash-nav-item dash-nav-dropdown-toggle">
				<i class="fas fa-cog"></i> Configuration
			</a>
			<div class="dash-nav-dropdown-menu">
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]preferences.dna" class="dash-nav-dropdown-item[showif [PAGEID]=preferences] nav-on[/showif]">
					Preferences
				</a>
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]performance.dna" class="dash-nav-dropdown-item[showif [PAGEID]=performance] nav-on[/showif]">
					Performance
				</a>
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]triggers.dna" class="dash-nav-dropdown-item[showif [PAGEID]=triggers] nav-on[/showif]">
					Triggers
				</a>
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]email-settings.dna" class="dash-nav-dropdown-item[showif [PAGEID]=email-settings] nav-on[/showif]">
					Email Settings
				</a>
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]error-reporting.dna" class="dash-nav-dropdown-item[showif [PAGEID]=error-reporting] nav-on[/showif]">
					Error Reporting
				</a>
			</div>
		</div>
		<div class="dash-nav-dropdown[showif [varSECTION]=security] show[/showif]">
			<a href="#!" class="dash-nav-item dash-nav-dropdown-toggle">
				<i class="fas fa-user"></i> Users & Security
			</a>
			<div class="dash-nav-dropdown-menu">
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]users.dna" class="dash-nav-dropdown-item">
					WebDNA Users
				</a>
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]security.dna" class="dash-nav-dropdown-item">
					Security
				</a>
			</div>
		</div>
		<div class="dash-nav-dropdown mobile-only">
			<a href="#!" class="dash-nav-item dash-nav-dropdown-toggle">
				<i class="fas fa-server"></i> Flush
			</a>
			<div class="dash-nav-dropdown-menu">
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]flush-databases.dna" class="dash-nav-dropdown-item">
					Flush Databases
				</a>
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]flush-cache.dna" class="dash-nav-dropdown-item">
					Flush Cache
				</a>
			</div>
		</div>
		<div class="dash-nav-dropdown[showif [varSECTION]=system] show[/showif]">
			<a href="#!" class="dash-nav-item dash-nav-dropdown-toggle">
				<i class="fas fa-chart-bar"></i> System Status
			</a>
			<div class="dash-nav-dropdown-menu">
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]statistics.dna" class="dash-nav-dropdown-item">
					Statistics
				</a>
				<a href="[showif [PAGEID]=welcome]Admin/[/showif]databases.dna" class="dash-nav-dropdown-item">
					Databases
				</a>
			</div>
		</div>
		<div class="dash-nav-dropdown">
			<a href="#!" class="dash-nav-item dash-nav-dropdown-toggle">
				<i class="fas fa-graduation-cap"></i> Training
			</a>
			<div class="dash-nav-dropdown-menu">
				<a href="https://docs.webdna.us/" target="_blank" class="dash-nav-dropdown-item">
					Tech. Reference
				</a>
				<a href="http://www.webdna.us/page.dna?numero=55" target="_blank" class="dash-nav-dropdown-item">
					Talk List Archives
				</a>
			</div>
		</div>
		<a href="http://www.webdna.us/page.dna?numero=38" target="_blank" class="dash-nav-item">
			<i class="fas fa-info"></i> About
		</a>
		<a href="http://store.webdna.us" target="_blank" class="dash-nav-item">
			<i class="fas fa-shopping-cart"></i> WebDNA store
		</a>
	</nav>
	[!]------------------- NAV END -----------------[/!]
</div>