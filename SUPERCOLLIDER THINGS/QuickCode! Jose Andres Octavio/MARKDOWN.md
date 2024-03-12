HELLO!
    It is I, _Jose_!

I had a really tough time with this assigment. Being fully honest, I tackled it rather late, as my submission time shows you, because I got caught up with personal projects as well as other classes. Then I remembered, thought about a great idea sampling and warping audio files of me playing the piano. The problem with that is that the code for that would have looked like this:
       
        ~b1 = Buffer.read(s, "/Users/joseandresoctavio/Desktop/QuickCode Assigment (Moving Piano)/PianoTime1.wav")

That line alone is already at 106 and if I wanted to go on about doing warping shenanigans with my cursor position, that wouldn't have worked. Thus I spent the following 2 hours trying to figure out what to do.
    Eventually I started unpacking the wikipedia link to the analysis you gave us for the project, in which the first code on the page, specifically this one by @micromoog:
        
        play{LFCub.ar(LFSaw.kr(LFPulse.kr(1/4,1/4,1/4)*2+2,1,-20,50))+(WhiteNoise.ar(LFPulse.kr(4,0,LFPulse.kr(1,3/4)/4+0.05))/8)!2}

From this I saw opportunity, tried to unpack it and learned quite a lot, although not enough, which in turn leaves my final sound still sort of a mess. While I do think it sounds cool as just an intense and gimmicky thing, I would have much preffered to understand what exactly was causing what, as most of my knowledge came from trial and error, which in turn made my speakers blow out 2 times. 
And so, the final line of code that I wrote for the tweet, coming in at a whopping 104 characters is this:

    play{var x,y;x=MouseX.kr(0.5,40,1);y=MouseY.kr(1,20,1);Pan2.ar(SinOsc.ar(Saw.ar(220/x)*200+200,1,y,1;))}

Its a sound that depending on where the mouse is positioned will go to an LFO Sine Wave sound, sort of like a high pitched 808 Kick Drum, to an unfiltered, strong and loud sound of like a phasing issue. Its cool though. I forgot to mention but most of the debbugging ended up being me forgetting a ; in between parts of the code, or just having parentheses that dont really go anywhere. 

