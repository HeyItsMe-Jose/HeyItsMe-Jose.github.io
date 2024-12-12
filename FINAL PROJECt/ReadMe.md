Final Project!

1. I've decided to try and create a flashlight effect, but having it be synced to the velocity of what I'm playing. For this I feel like I can go on from the pdsequence file and work from there. Eventually the point is to have different sized responses depending on how hard I am playing, as like a desperate thing with the flashlight. Akin to a horror thing.

--------------------------------------------------------------------------------------
Alright, this previous section was written when I felt I had more time. Life took a different path and I ended up not fully realizing my idea. That being said, I was able to create some cool visuals that respond to an interesting song I made within ableton. 
Thanks to lines like these:
ofSetColor(r, 0, 0, 128);
      ofNoFill();
      ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, oscx*1);

      ofSetColor(0, g, 0, 128);
      ofFill();
      ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2.05, oscy*9);

You get a nice contrast between what is the dense red falling onto your eyes, only to be changed towards a calming blue. In a similar manner, that green color is being blended with a blue utilizing the: 
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);

This makes it so its a more interesting shade of blue, rather than the typical same old r, g, b value. 

To set up the midi I worked my way from the template given to us by R A C H EL R O M E!

Thats pretty much all of it. I missmanaged time, but this time I got it on time which makes this time a good time to give on time my timely given project.
