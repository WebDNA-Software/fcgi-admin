[!]
-- WebDNA fcgi admin include users --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
[!]

[/!][text]varMAX=25[/text][!]

[/!][switch value=[task]][!]

	----- save user -----
	[/!][case value=save-user][!]
		[/!][replace db=Users.db&eqUSERdatarq=[url][user][/url]][!]
			[/!]&groups=[url][groups][/url][!]
			[/!]&expire_date=[url][expire_date][/url][!]
			[/!]&expire_del=[url][expire_del][/url][!]
		[/!][/replace][!]
		[/!][text]userupdated=t[/text][!]
		[/!][include file=include/pages/users/users-edit.inc][!]
	[/!][/case][!]
	
	----- save new password -----
	[/!][case value=save-pw][!]
		[/!][replace db=Users.db&eqUSERdatarq=[url][user][/url]][!]
			[/!]&pass=[url][encrypt][uppercase][newpass][/uppercase][/encrypt][!]
		[/!][/replace][!]
		[/!][text]userupdated=t[/text][!]
		[/!][include file=include/pages/users/users-edit.inc][!]
	[/!][/case][!]
	
	----- search all -----
	[/!][case value=group-result][include file=include/pages/users/users-search-all.inc][/case][!]
	
	----- edit user form -----
	[/!][case value=edit-user][include file=include/pages/users/users-edit.inc][/case][!]
	
	----- search user form -----
	[/!][case value=search-user][include file=include/pages/users/users-search.inc][/case][!]
	
	----- add user form & save -----
	[/!][case value=add-user][include file=include/pages/users/users-add.inc][/case][!]
	
	----- set new password form -----
	[/!][case value=set-pw][include file=include/pages/users/users-set-pass.inc][/case][!]
	
	----- default -----
	[/!][default][include file=include/pages/users/users-admin.inc][/default][!]
	
[/!][/switch]