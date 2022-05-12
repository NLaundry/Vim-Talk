# Vim: Editing at the Speed of Thought 

* Note, I stole that title from someone and I'm looking for it.
* If you find the original author, tell me so I can cite them.
* BTW I wrote this thing in Vim. So there.

## Intro - We're gonna break some rules

* So Vim can be an intimidating thing
* Like a lot of linux-y terminal driven computing there's an air of 
  elitism that can surround it.
* We're going to take none of that today. This is a no bullshit presentation on 
  how to learn to use Vim NOW, effectively and intuitively.
* To do that, we'll have to break a few elitist rules, describe how Vim works 
  in not 100% accurate ways, and in general perform Vim heresy.
* So whether you're here because:
    * Your job requires you to SSH into servers with nothing but Vi
    * The cool upper year told you Vim is the way
    * Or you're just a fan of me ;)
* we're going to have some fun making Vim feel a little more personable today.

## Why to use Vim

* When you're first faced with Vim the biggest question is "why?"
* Why use this editor, first drafted up way before widespread use of the mouse 
  when modern alternatives exist.
* Because it's easier, more intuitive, and more productive.
* And you're all thinking ... "but one time I launched Vim and I couldn't 
  even figure out how to close it." yeah yeah, I've seen the memes 
  I lived it too.
* Vim has a learning curve, but once your cross it, everything's easier in Vim
* To do that, we're going to lower that curve with some mental models 
  you're probably already using, but don't realize it.

## Principles of Vim

* The more you talk to Vim users the more you hear about all the crazy 
  things it speeds up and how "THIS IS HOW VIM IS MEANT TO BE USED"
* I'm going to start off with the two things that make Vim, Vim.

### Editing first, Writing second

* First off, Vim assumes: We spend 80% of our time reading, editing, and 
  debugging code. Only 20% is for writing.
* Why then? WHY is the default action of any text editor to add text?
* Let me explain.

#### Vim Modes

* in Vim there are two major modes (there's more but this is the first corner 
  I'm cutting to piss of Vim elitists):
    * Insert mode - what you're used to, for adding text to a file
    * Normal mode - where editing and navigation happens. This is the magic
    * We're going to get back to this when we do our demonstration

### The Vim Language

* Building on the back of Normal mode supremacy is the Vim Language
* This is the seemingly non-sensical combination of keybindings that 
  scares off new Vim users.
* When you break it down though, it's actually really intuitive.
* There's one core idea here: verbs act on nouns.
* That's it.
* We also make room for things like directions and quantities. 

* Nouns are things like:
    * a word,
    * a block (things between two tags like brackets, parens, these things <>)
    * a line of text - the default noun
* Verbs are how we interact with text:
    * Change,
    * Delete,
    * Move, - default
    * Copy - referred to as yank.

## Demonstration

* None of this really makes any sense until we see it in action. So let's do that.
* Mostly going to wing this but I'm going to add a few key things I want to show:
    * so here I've got an example C file setup.
    * when I enter Vim I start in normal mode - I can slam the keys and 
      no text appears
    * let's start with something simple. See all this white space between 
      the function prototype and the main function? Let's get rid of it.
    * To do that, I'm going to set my cursor below the function prototype
    * Then I'm going to type "d2j":
        * so the verb is delete, we typed 'd' to start that verb.
        * 2 is a quantity
        * j is the direction, down.
        * and the noun is the default noun "line"
    * okay, let's try deleting some more nouns and see what changes
    * The second function prototype returns an int, but it should return a char:
        * let's delete that with "dw"
        * Verb = delete 'd'
        * noun = word 'w'
        * Okay that kinda makes sense
    * but that's not what we really wanted to do is it?
    * We really wanted to CHANGE that word. So let's try another verb:
        * let's change that word with 'cw'
        * verb = change 'c'
        * noun = word 'w'
        * What's differen this time is Vim has put us into insert mode
        * This way we can type the change we want to make instead of 
          just deleting
    * As a quick aside 'dw' and 'cw' will delete or change until the next word
    * Often though, you'll find yourself with your cursor in the middle of a word
    * to handle that, just tell Vim you're INSIDE a word with the 'i' modifier.
    * so instead we use 'ciw' "change (HEY I'M INSIDE) word"
    * or more correctly "Change inner word" - we'll use inner again later
    * Okay let's cover some more basics. You've all seen me moving around a bunch. 
      let's do that.
    * Remember I said "move" is the default verb and line is the default noun.
    * So to move down one line, i use 'j' which is the down direction key
    * to move up one line I use 'k' which is the key for up
    * to modify how many, just like with delete, I can add numbers before the direction.
    * '20j' jumps me 20 lines down
    * '20k' jumps me 20 lines up
    * if we use a noun like word, we can change the way we move.
    * obviously it doesn't make sense to move down 1 word or up 1 word:
        * instead, 'w' for word, moves forward 1 word.
        * So the default verb here is still move
        * this breaks the mental model, but moving backward one word is 'b'
        * oh well, not everything can fit.
    * My favourite noun though is block, or as vim calls it tag.
    * let's say we need to change the parameters of a function
    * how do we do that?
    * 'change inside block' the block being contained by the parens or brackets
    * we just have to tell Vim what kind of characters wrap the block.
    * in this case it's round brackets. so we type
    * 'ci('
    * What's best about this is when you're dealing with html or jsx
    * Changing everything inside a block of html is AWESOME
    * there we refer to each <> as tags. so we type "cit"
* Q&A session - ask me how to do shit

## Modernizing vim

* so what you've seen so far is my pretty heavily configured Vim
* Let's look at what Vim is like right out of the box

### Cracking the baseline usability

