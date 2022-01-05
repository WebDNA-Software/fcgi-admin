/*!
	* WebDNA fcgi admin
	*	Version 8.0.0
	*	2021-12-30
*/
const mobileBreakpoint = window.matchMedia("(max-width: 991px )");

// site navigation
$(document).ready(function(){
    $(".dash-nav-dropdown-toggle").click(function(){
        $(this).closest(".dash-nav-dropdown")
            .toggleClass("show")
            .find(".dash-nav-dropdown")
            .removeClass("show");

        $(this).parent()
            .siblings()
            .removeClass("show");
    });

    $(".menu-toggle").click(function(){
        if (mobileBreakpoint.matches) {
            $(".dash-nav").toggleClass("mobile-show");
        } else {
            $(".dash").toggleClass("dash-compact");
        }
    });

});

// reset password form
$('#setpass').submit(function() {
    var id1 = $('#pass1').val();
    var id2 = $('#pass2').val();
    if (id1 == id2) {
			if ((id1 == '') || (id2 == '')) {
				$('#errormessage').html('Password can not be blank');
				$('#errormessage').removeClass('d-none');
				return false; // no submission
			}
			else {
				$('#errormessage').addClass('d-none');
				return true; // form submits
			}
    }
    else
    {		
    	$('#errormessage').html('Passwords must match');
			$('#errormessage').removeClass('d-none');
			return false; // no submission
    }
});