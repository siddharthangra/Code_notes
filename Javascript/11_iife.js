// Immediately Invoked Function Expressiong (IIFE)

(function  chai(){
    console.log(`DB CONNECTED`);
}) ();  /* here semicolon is must needed, as it stops the function 
            after one use... */

//basically with this synatx we can immediately run the funcition 
// which can sometimes be disrupted by global code pollution

( (name) => {
    console.log(`DB CONNECTED TWO ${name}`);
}) ('SIddharth');