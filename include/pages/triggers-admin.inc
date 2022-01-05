[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<tr>
	<td class="text-right bg-light font-weight-bold" width="20%">Enabled</td>
	<td>
		<select name="__enable" class="select-css50">
			<option value="T" [showif [enable]=T]selected[/showif]>true</option>
			<option value="F" [showif [enable]=F]selected[/showif]>false</option>
		</select>
	</td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Trigger type</td>
	<td>
		<select name="__trigger" class="select-css50">
			<option value="TIME" [showif [trigger]=TIME]selected[/showif]>TIME</option>
		</select>
		<div class="mt-2"><i>(TIME is the only option)</i></div>
	</td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Execute Params</td>
	<td>
		[listwords words=[url][param][/url]&delimiters= ]
			[lookup db=data/triggerparams.db&lookinfield=Number&value=[index]&returnfield=Name]:<input type="text" class="timevars" name="param[index]" value="[word]"> 
		[/listwords]
		<div class="mt-2"><i>24 hour clock is assumed. Use "*" to ignore.<br>
		Each value can be read as "Will execute whenever [heading] equals [value]".<br>
		For example "* * * 9 15 0" is "Will execute whenever hour is 9,<br>
		minute is 15, and 0 seconds".</i></div>
	</td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">NextExecute</td>
	<td>
		<input name="__nextexecute" type="text" value="[nextexecute]"> (YYYY/MM/DD HH:MM:SS)
		<div class="mt-2"><i>The trigger will execute if it is enabled, and the NextExecute time<br>
		is earlier than the current time. Even if your parameters tell<br>
		the trigger to execute every minute, if the NextExecute time is<br>
		tomorrow, the first execution will not take place until tomorrow.<br>
		This value is reset by WebDNA each time the trigger is executed<br>
		using the parameters described above.</i></div>
	</td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Execute URL</td>
	<td>
		<input name="__executeurl" type="text" value="[executeurl]" placeholder="https://">
		<div class="mt-2"><i>Must be a complete URL (including http:// or https://). WebDNA will "hit"<br>
		this URL when the trigger is executed.</i></div>
	</td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Username</td>
	<td><input name="__user" type="text" value="[user]" placeholder="leave blank if URL is not password protected"></td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Password</td>
	<td><input name="__pass" type="text" value="[pass]" placeholder="leave blank if URL is not password protected"></td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Validation Text</td>
	<td class="border-0">
		<input name="__wasgood" type="text" value="[wasgood]">
		<div class="mt-2"><i>WebDNA must find this text in the page that is returned<br>
		from the Execute URL specified above in order to consider the trigger<br>
		successful. If this isn't found in the page source then WebDNA<br>
		tries the trigger again at the Retry Interval specified.</i></div>
	</td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Timeout</td>
	<td><input name="__timeoutseconds" type="text" value="[timeoutseconds]"> seconds</td>
</tr>
<tr>
	<td class="text-right bg-light font-weight-bold">Retry</td>
	<td><input name="__retryseconds" type="text" value="[retryseconds]"> seconds</td>
</tr>