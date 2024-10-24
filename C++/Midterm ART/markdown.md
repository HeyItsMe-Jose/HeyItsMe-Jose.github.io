*Documentation*

I FORGOT TO WRITE THIS TILL THE END, IMA BE HONEST

- This project took me down a bunch of rabbit holes that I wasn't expecting to go thru. It took so long just to set up the final idea, mostly because I would go down thru various rabbit holes that would only return minimal resutls

??Wrong Turns??

------//Randomized Color//----
1. For starters, I tried to set it up so that my randomized colors would be slower. This did not work. utilizing the rand() function after defining the colors as r, g and b, leads to a strobe effect that, while cool, is garuanteed to give seizures. So that was the first wrong turn.
    Granted, from this I did learn that to define values as r, g and b saves time! You can still see remnants of this code within my final result:

    for (int i = 0; i < bands; i++){
    int r = 255;
    int g = 255;
    int b = 255;
    }

------//Video Opacity Situation//----
2. While this idea seemed promising, it slowly devolved into a horrid mess. I got the video to show up by defining it in the header as well as the location of it. From here, and thru the help of ChatGpt, I got it to work so that if you press your mouse the video can be toggled on and off. The problem came in the form of the video not showing up:
    - Thru the Circles
    - Anywhere EXCEPT thru the circles

To fix this I went back to the drawing board, only for Chatgpt to recommend the fbo function. This started out looking promising, although it only caused more and more issues. 
    Granted, from this I found out two things! 
        1a. If you utilize the clicking function you can have a way to test out the black circles and their positioning without having to wait till it happens.
        2a. Blending mode is a thing and is massively important to create an interesting color scheme

!!Good Turn!!

1. We finally reach the actual project, which ended up being a bunch of circles responding to an audio, clashing against black squares to create a flashlight effect. The code for said circles looks as such:

ofEnableBlendMode(OF_BLENDMODE_ALPHA);

for (int i = 0; i < bands; i++){
    int r = 255;
    int g = 255;
    int b = 255;

    ofSetColor(r, 0, 0, 128);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, fft[i]*1500);

    ofSetColor(0, g, 0, 128);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2.05, fft[i]*1500);

    ofSetColor(r, g, b, 245);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2.05, fft[i]*1250);

    ofSetColor(0, 0, b, 128);
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/1.95, fft[i]*1500);

    ofSetColor(r, g, b, 200);
    ofNoFill();
    ofDrawCircle(ofGetWidth()/2.05, ofGetHeight()/2, fft[i]*500);

    ofSetColor(r, g, b, 200);
    ofNoFill();
    ofDrawCircle(ofGetWidth()/1.95, ofGetHeight()/2, fft[i]*500);
}

While this looked cool in its own way, to make it even more intense, having the contrast of black circles also responding to the music elevated it. With this, whenever the circles reached the edges of the screen, they would start crashing against sets of black circles, sort of giving a strobe light flashlight effect thing. The code for said circles looks as follows

//-----CircleHell---------------
    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1, ofGetHeight()/1, fft[i]*1000);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1000, ofGetHeight()/1, fft[i]*1000);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1, ofGetHeight()/1000, fft[i]*1000);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1000, ofGetHeight()/1000, fft[i]*1000);

//----Smaller Circle Hell---------------
    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1.32, ofGetHeight()/1, fft[i]*250);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/4, ofGetHeight()/1, fft[i]*250);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/1.32, ofGetHeight()/1000, fft[i]*250);

    ofSetColor(0, 0, 0);
    ofFill();
    ofDrawCircle(ofGetWidth()/4, ofGetHeight()/1000, fft[i]*250);

To conclude, you can do some really cool stuff, although I still get confused. I do get confused a lot less than before, and that makes me happy.