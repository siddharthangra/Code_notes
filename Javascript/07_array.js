
const myArr = [0,1,2,3,4,5];
const myArr2 = new Array(1,2,3,4);

console.log(myArr[2]);

//Array methods
myArr.push(6); //add element in the end
console.log(myArr);
myArr.pop(); //removes an element from end
myArr.unshift(7); //add an element in the starting
myArr.shift(); //removes the first elements
console.log(myArr);

console.log(myArr.includes(3));
console.log(myArr.indexOf(6)); //try with a non-existing element

const newArr = myArr.join() //converts the type to string

console.log(myArr);
console.log(newArr);


const newArr2 = myArr.slice(1,3); //gives the portion of array ~ as a stack memory ~ exclusing last index
console.log(newArr2);
console.log(myArr);
const newArr3 = myArr.splice(1,3); //extracts the whole array from index 1-3(included) from original array
console.log(newArr3);
console.log(myArr); 


//using Push to add elements onf array 2 to aarray 1 will just add array 2 as an element
// to counter this two method can be used
const marvel_heros = ["Spiderman", "Thor", "Hulk"];
const dc_heros = ["flash", "Aquaman", "Batman"];

//"concat"
okheroes = marvel_heros.push(dc_heros);
console.log(okheroes);
console.log(okheroes[3]);
// caution: marvel_heros array has been changed now
marvel_heros.pop();
const new_heros = marvel_heros.concat(dc_heros);
console.log(new_heros);
//"SPREAD OPERATOR"
const all_new_heros = [...marvel_heros, ...dc_heros];
console.log(all_new_heros);
/* This method lets you add multiple array at same time*/


const Arr3 = [1,2,3,[4,5,6],7,[8,9,[10,11]]];
const ordered_array = Arr3.flat(Infinity);
console.log(ordered_array);

/* this opens to sub array and provide as elements, the value at infinity
is used to tell how many depth we wanna go to open the array */

console.log(Array.isArray("Siddharth"));
console.log(Array.from("Siddharth")); //make the given string an array


