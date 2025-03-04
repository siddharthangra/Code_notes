/*
function name(params) {
    
}
*/


//Adding two numbers
function addNumbers(i, j){
    console.log(i+j);
    return i+j;
}
addNumbers(3,4); //OFC this is not a right code cause we haven;t used if statement to check and convert dataypes to numbers



function calculateCartPrice(num1){
    return num1
}
console.log(calculateCartPrice(20)); 
//but what if I add mutliple stuffs like
console.log(calculateCartPrice(20,100,200));
//to counter this rest operator "..." is used which returns an array
function calculateCartPrice2(...num1){
    return num1
}
console.log(calculateCartPrice2(20,100,200,2000));



//using object in function
const User ={
    usrname:"Siddharth",
    Age : 19
}
function trial(anyobject){ 
    console.log(`Username is ${anyobject.usrname} and their age is ${anyobject.Age}`)
}
trial(User);
//well, tho in this we will have to check for particular objects in actual codes

trial({
    usrname: "OK",
    Age: 19
})

const myNewArray = [200,400,100,600]
function returnSecondValue(getArray){
    return getArray[1]
}

console.log(returnSecondValue(myNewArray));