/*
 * Tabs
 */
(function($){
	
	$.fn.tabs = function(){
		var o    = this;
		var navs = $(o).find('.tabs-header a');
		var tabs = $(o).find('.tabs-page');
		var tabChange = function(e){
			e.preventDefault();
			var target = $(this).attr('href');
			$(navs).removeClass('tab--active');
			$(tabs).removeClass('tabs-page--open');
			$(this).addClass('tab--active');
			$(target).addClass('tabs-page--open');
			return false;
		}
		$(navs).on('click', tabChange);
	}
	
})(jQuery)