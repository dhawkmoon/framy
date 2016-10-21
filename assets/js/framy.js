/**
 *
 * FRAMY
 *
 * Let's give a try to write some usefull stuff
 *
 */
 
/*
 * POPOVER
 */

/*
(function($){
	
	$.fn.popover = function(){
		console.log(this);
	}
	
})(jQuery)
*/

/*
 * MODAL
 */
jQuery(document).ready(function($){
	
	var framy_modal_close = function(){
		$('.modal-wrapper,.modal-overlay,body').removeClass('modal--opened').removeClass('modal-overlay--opened');
	}
	
	var framy_modal_open = function(){
		var target = $(this).data('target');
		if( typeof(framy_modal_open.overlay) == 'undefined' ){
			$('body').append('<div class="modal-overlay"></div>');
			$('.modal-overlay').on( 'click', framy_modal_close );
			framy_modal_open.overlay = true;
		}
		$('body>.modal-overlay').addClass('modal-overlay--opened');
		$(target + ',body').addClass('modal--opened');
		
		
	}
	$('[data-framy="modal"]').on('click', framy_modal_open);
	
	
	$('.modal-closer,[data-framy="modal-close"]').on( 'click', framy_modal_close );
	
	var framy_scroll_to = function(e){
		e.preventDefault();
		var target = $(this).attr('href');
		var offset = $(target).offset().top;
		$('body, html').animate({scrollTop:offset}, 500);
		return false;
	}
	$('.nav a[href^="#"]').on('click', framy_scroll_to);

	if( $('.parallax').length > 0 ){
		var collection = $('.parallax');
		for(i=0; i<collection.length; i++){
			$( collection[i] ).parallax();
		}
	}
	if( $('.tabs-wrapper').length > 0 ){
		var collection = $('.tabs-wrapper');
		for(i=0; i<collection.length; i++){
			$( collection[i] ).tabs();
		}
	}
});
/*
(function($){
	
	$.fn.modal = function(){
		console.log(this);
		
	}
	
})(jQuery)
*/