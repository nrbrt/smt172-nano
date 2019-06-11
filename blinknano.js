var Avrgirl = require('avrgirl-arduino');
 
var avrgirl = new Avrgirl({
  board: 'nano'
});
 
avrgirl.flash('blink.hex', function (error) {
  if (error) {
    console.error(error);
  } else {
    console.info('done.');
  }
});