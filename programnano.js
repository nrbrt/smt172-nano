var Avrgirl = require('avrgirl-arduino');
 
var avrgirl = new Avrgirl({
  board: 'nano'
});
 
avrgirl.flash('smt172.hex', function (error) {
  if (error) {
    console.error(error);
  } else {
    console.info('done.');
  }
});