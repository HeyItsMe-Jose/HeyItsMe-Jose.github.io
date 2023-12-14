STATUS REPORT

1. This was unnerving to undergo, specially since I didn't manage my time properly so I ended up having to work a lot of it on the ladder half of the 2 weeks we had.
2. I started out with the example code Rachel gave us, and from there I went on to format it in a matter I liked more.
3. I discovered the existance of the <marquee> command, which in turn let me to create abominations such as the scrolling text. The code for that looks as such:
  <h2><marquee direction="down"
               width="2000"
               height="150"
               behavior="alternate"
               style="border: transparent">
    <marquee behavior="alternate"><mark>Welcome to my webpage!</mark></marquee>
  </marquee></h2>
    
    I loved this, so I utilized it quite some times.

4. Since the background is a video, I had to make sure that the text was still legible even with moving backgrounds with a wide range of colors. This lead me to add on the <mark> code, which I specified within the CSS to act as a white highlight over black text. The code for that looks as follows:
     mark {
    background-color: hsl(0, 0%, 100%);
    color: black;
  }

5. I was having a tought time properly setting the the border length to only stay around the text and not stretch to the size of the window, which lead me to spend 4 HOURS trying to sort that out. I didn't understand how to fix it, so I just had to deal with and to be honest, the fact that its so long adds to the scrappy design that I favored while working.
6. The part that took BY FAR the longest, was being able to put the songs in different columns, one in the right, one in the middle, and the other in the left. That mostly took a while cause any time I wanted to put the text within the same line, it would jump lower and lower, creating a sort of staircase effect. Eventually I had to specify for each title, mp3 and description to be separate it in this very long and tedious way:
     <div>
      <h1 style="position: relative; display: inline-block; text-align: left; vertical-align: middle; margin-right: 200px;"><mark>My Favorite Old Tune!</mark></h1>
      <h1 style="position: relative; display: inline-block; text-align: left; vertical-align: middle; margin-right: 215px;"><mark>The First Tune!</mark></h1>
      <h1 style="position: relative; display: inline-block; text-align: right; vertical-align: middle; margin-right: 215px;"><mark>My Favorite New Tune!</mark></h1>
    
    While there's probably an easier way to sort this out, I am proud that I got to this solution by trial and error and StackOverflow.com

7. With everything set and done I wanted to have a way to properly showcase the video and not only have it be covered by all the text. So within the last description I made the margin for the bottom massive, which lets someone scroll downwards to a part of the webpage without text, as to fully see the music video. The code for that looks as follows:
    <border style="position: relative; display: inline-block; text-align: right; vertical-align: right; margin-right: 70px; margin-bottom: 1000px;"

    The portion of margin-bottom is the specific part that specifies this, thats why its 1000px.

