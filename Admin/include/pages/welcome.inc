[!]
-- WebDNA fcgi admin include --
-- Version 8.0.0 --
-- 2021-12-30 --
[/!]
<h2 class="dash-title">Welcome to WebDNA</h2>
<p> Thank you for installing WebDNA, WebDNA Software Corporation's complete solution for eCommerce and dynamic web publishing. You have just added powerful dynamic website tools and database features to your web serving environment.</p>
<h3>Initial Configuration</h3>
<h4>Step 1:</h4>
<p>Set your preferences for WebDNA using the Administration link on the left (<a href="admin/preferences.dna" class="">"Configuration > Preferences"</a>).<br>Note, for first-time administration, enter username <b>'admin'</b> and password <b>'admin'</b>.</p>
<p>If you are not able to get into the preferences page, it may mean that the '.db' suffix is not mapped to the WebDNA engine.<br>
You can tell if WebDNA is working if you <b>DON'T</b> see the <b>WebDNA_not_Configured</b> text at the top of this page.<br/>
If you <b>DO</b> see this text, it most likely means that one of the standard suffixes that are usually mapped to the WebDNA engine is not yet cofigured correctly. These "standard" suffixes are: .html, .tpl, and .dna.</p>
<p>Note, ".html" is optional, so if that is the only suffix that is not mapped, you will still see the <b>WebDNA_not_Configured</b> text, but if you do not want to map the .html suffix to WebDNA, you are not required to do so. (Just ignore that text if that is the case) </p>

<p>Suffix Mapping is done first in the <b>WebDNA/webdna.ini</b> file, and then in the admin pages: <a href="admin/preferences.dna" class="">"Configuration > Preferences"</a>.</p>

<h4>Step 2:</h4>
<p>Browse the lefthand menu to explore WebDNA and learn how to harness its power.</p>

<h4>Step 3: Try it out!:</h4>
<p>Copy and Paste this into a blank text file, upload it to your server, then link to it with a browser.</p>
<p class="text-danger">Make sure permissions and ownership are set correctly for the file and it's directory</p>
<pre>
&#60;!--HAS_WEBDNA_TAGS--&#62;
&#60;html&#62;
  &#60;head&#62;
    &#60;title&#62;My First WebDNA Page&#60;/title&#62;
  &#60;/head&#62;
  &#60;body&#62;
    &#60;p&#62;Hello World! &#60;/p&#62;
    &#60;p&#62;Today is: [date %m/%d/%Y] and now is: [TIME format=%I:%M:%S %p].&#60;/p&#62;
    &#60;p&#62;You are from the IP ADDRESS: [IPADDRESS]&#60;/p&#62;
  &#60;/body&#62;
&#60;/html&#62;
</pre>
<p>Or, proceed to create your own HTML/css/Javascript/WebDNA pages.</p>

<h4>Step 4:</h4>
<p>When you are ready to deploy your WebDNA solution, visit the <a href="http://store.webdna.us/" target="_blank">WebDNA store</a> to select the appropriate license.</p>