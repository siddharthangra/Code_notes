const balance = new Number(100);
console.log(balance.toFixed(2)); //fix the decimal values

const otherNumber = new Number(23.789);
console.log(otherNumber.toPrecision(3));

//Try changing the "otheNumber to know more"

const hundred = 10000000;
console.log(hundred.toLocaleString());
/*give commas. to use Indian standard use en-IN */

// ++++++++++++++++++++++ MATHS++++++++++++++++++//
console.log(Math);
console.log(Math.abs(-4)); //makes -ive to +ive
console.log(Math.round(4.6)); //round off the number
console.log(Math.ceil(4.2)); //Give the upper integer
console.log(Math.floor(4.2)); //give the gint value
console.log(Math.min(3,4,5,6));
console.log(Math.max(3,6,1,2));

console.log((Math.random())*10); //generate random values between 0-1 i.e if you want >1 use *10 stuffs
