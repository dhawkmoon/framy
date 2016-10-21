/*
 * Parallax
 */
(function($){
	
	$.fn.parallax = function(){
		var o = this;
		var run = function(){
					
			var winScrTop  = $(window).scrollTop();
			var parOfstTop = $(o).offset().top - $(o).height() / 2;
			var parHeight  = $(o).height();
			//console.log( winScrTop, parOfstTop );
			if( winScrTop >= parOfstTop &&  winScrTop <= parOfstTop + parHeight ){
				$(o).scrollTop( winScrTop - parOfstTop );
			}
			else if( winScrTop <= parOfstTop ){
				$(o).scrollTop(0);
			}
			else{
				$(o).scrollTop( $(o).height() );
			}
		}
		$(window).on('scroll', run);

	}
	
})(jQuery)