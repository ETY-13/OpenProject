
/*
 Blake Caldwell and Theng Yang
 CS301 Project


 Javascript code for CS301 Project. This code create a mandelbrot and display it in a window in the browser. 

 References:
 https://en.wikipedia.org/wiki/Mandelbrot_set
 https://p5js.org/
*/


// Gobal varibale use to change oscillation angle and position of mandelbrot 
var os = false;
var angle = 0;
var clicked = false;

var cx =0.0;
var cy =0.0;

var minReal = -2.2;
var maxReal = 1.3;

var min_i = -1.3;
var max_i = 1.3;

// Setup a window to draw in
function setup() {
  let canvas = createCanvas(500, 500);
  pixelDensity(1);
  canvas.position(400,100);

  b1 = createButton('oscillate');          // make a button that use to listen for event
  b1.position(400,610);
  b1.mousePressed(oscillate)              // call oscillate() when button is clicked
  
}

// A Function that change the window from display a mandelbrot to display a 
// oscillation of the julia set.
function oscillate(){

	if(os){                      // check from button status: first click to do oscillation, second click to end. 
	os=false;
		angle =0;               // reset all variable everytime oscillate() is called to restart oscillation.
		minReal = -2.2;
		maxReal = 1.3;         // set real and imaginary range to position the julia set so it is easier to see on the display.

		min_i = -1.3;
		max_i = 1.3;
	}

	else{
		minReal = -1.3;
		maxReal = 1.3;

		min_i = -1.3;
		max_i = 1.3;

		os=true;
	}
}


// A function that draw the mandelbrot and julia to the window.
function draw() {
   
	var red = 0;         // Color value defined
	var green = 1;
	var blue = 2;
	var alpha = 3;

	var iter = 81;

	if(os){                             // if oscillation is set true by oscillate(), then do oscilation of 
										// julia set by using sin(angle) to set real c and cos(angle) to set imaginary c.
		cx =0.7885*cos(angle);
		cy =0.7785*sin(angle);
		angle+= 0.04;
	}

	var zy = 0.0;
	var zx = 0.0;

  loadPixels(); 


  // Interate through the window demision. 'width' and 'hieght' are the with and height of our window
  for (var y = 0; y < height; y++) {

    for (var x = 0; x < width; x++) {

	    zy = map(y, 0, height, min_i , max_i);         // use map() to scale the range so it will be from 
		zx = map(x, 0, width, minReal, maxReal);      // minReal to maxReal and min_i to max_i
		
		if(!os && !clicked){                       // if neither of 'os' or 'clicked' is true, cy and cx (real and imaginary c) will be the scale of zy and zx.
			cy = zy;
			cx = zx;
		}
		
        var counter= 0;

		// calculate the mandelbrot / julia set using:
		// mandelbrot: f(z) = z^2 + c where c is changing
		// julia: f(z) = z^2 + c where c is constant
		while ((zx * zx + (zy * zy) < 16.0) && counter < iter) {

			var zx_temp = zx * zx - zy * zy +cx

			zy = 2.0 * zx * zy+cy;
			zx = zx_temp;

			++counter;
		}
		
	    var color = 255;

		if(counter !=iter){
			color = counter;
		}

        var pix = (x + y * width) * 4;

        pixels[pix + red] = sin(color)%255;  // set pixels
        pixels[pix + green] = color;
        pixels[pix + blue] = color;

        pixels[pix+alpha] = 255;
    }
  }

  updatePixels();                 
}

// A function that set cy and cx (real and imaginary c) to a position in accordance with mouse click.
// cx and cy will be use to compute particular julia set of the position in the mandelbrot. 
function mouseClicked(){
	if(clicked){
		clicked =false;                      // check clicked status: first click set cy and cx, second click go back to regular mandlebrot. 
	}
	else{
		clicked=true;
		cx = map(mouseX,0,width, -1.0, 1.0);
		cy = map(mouseY,0,height,-1.0,1.0);
	}
}
