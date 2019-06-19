mkdir /home/pi/nano;
cd /home/pi/nano;
npm install avrgirl-arduino;
wget -O smt172.hex https://raw.githubusercontent.com/nrbrt/smt172-nano/master/smt172.hex;
wget -O programnano.js https://raw.githubusercontent.com/nrbrt/smt172-nano/master/programnano.js;
node /home/pi/nano/programnano.js;
cd /home/pi;
rm -r /home/pi/nano;
