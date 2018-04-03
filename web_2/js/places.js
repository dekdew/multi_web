var btnSlidePrev = $('.btn-slide-prev'),
    btnSlideNext = $('.btn-slide-next');

  btnSlideNext.click(function() {
    $('.slide:first').appendTo('.slideshow');
  });
  btnSlidePrev.click(function() {
    $('.slide:last').prependTo('.slideshow');
  });
  $('.slide').click(function(e) {
    while (e.target != $('.slide:last')[0]) {
      $('.slide:last').prependTo('.slideshow');
    }
});