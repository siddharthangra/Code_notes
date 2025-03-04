// There are two ways to define strings

//Method -1
Name = "Siddharth";
console.log(Name);
console.log(Name.length);
console.log(`Hello my name is ${Name}.`) // note that `` is used here for this
//Method-2
const newName = new String('Siddharth'); 
/*if this method is used in console
 it will provide you with all the string function in js */
console.log(newName);
console.log(newName.length);
console.log(newName.toUpperCase());
console.log(newName[2]);
console.log(newName.charAt(3));
console.log(newName.indexOf('t'));
console.log(newName.substring(0,5));

const weirdName = new String("   SID    ");
console.log(weirdName);
console.log(weirdName.trim());
console.log(newName.replace('d', 'z')); //replaces the first occurence
console.log(newName.includes('y')); //give boolean answer if keyword exist