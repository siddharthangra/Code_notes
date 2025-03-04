
const JsUser = {
    name : "Siddharth",
    age : 19,
    email : "sid@google.com",
    city : "patiala",
    "surname" : "Angra",
}

//The object has been defined



//There are two methods to call the objects//
//Method-1 i.e .fxn()

console.log(JsUser.email);

//Method-2 i.e using []
console.log(JsUser["email"]); //here you'll have to specify the dataype as well
//let say now I add a parameter "surname" in object, this can't be called through method 1 now!!
console.log(JsUser["age"]);


const mysym = Symbol("key"); //defined a key
const JsUser2 = {
    name : "Siddharth",
    age : 19,
    //mysym : "key", //this will give mysym as a string datatype
    [mysym] : "key", //the type will be symbol
    email : "sid@google.com",
    city : "patiala",
    "surname" : "Angra",
}
console.log(JsUser2);



JsUser2.email =  "sid@chatgpt.com"; //equator is used to change the keys of an object
Object.freeze(JsUser2); //now the data of object is freezed and can't be changed
JsUser2.email = "Sid@ok.com";
console.log(JsUser2);

JsUser2.greeting() = function(){
    console.log("Hello JS User2")
}
//Defining function

JsUser2.greeting2() = function(){
    console.log(`Hello Js User, ${this.name}.`);
} //this. is used to call a key from an object
console.log(JsUser2.greeting());
console.log(JsUser2.greeting2());


const regularUser = {
    email: "acha@gmail.com",
    fullname: {
        userfullname: {
            firstname: "Siddharth",
            lastname: "Angra"
        }
    }
}
console.log(regularUser.fullname.userfullname.firstname);
//i.e calling objects under objects 

//METHODS TO COMBINE OBJECTS

//Method-1 assign operator
const obj1 = {1:"a", 2: "b"};
const obj2 = {3:"a", 4:"b" };
const obj3 = Object.assign({}, obj1, obj2);
console.log(obj3);
console.log(obj1);
const obj4 = Object.assign(obj1, obj2);
console.log(obj4);
console.log(obj1);
/* empty brackets is used cause this method follows heap memory layout,
i.e it will fill in the first entry, with following as teh source. */

//method -2 sprad operator
const obj5 = {...obj1,...obj2};
console.log(obj5);

console.log(Object.keys(obj3)); //gives the array of keys
console.log(Object.values(obj3)); //gives the array of values


//Destructuring Objects
const course = {
    coursename: "js in hindi",
    price: "999",
    courseInstructor: "hithesh"
}

/*as you know to call out keys "couse.keyname" is used
but there is one more and useful method */

const {courseInstructor} = course; //keyname is put in curly braces
console.log(courseInstructor);
//we can also give name to it ourselves i.e
const {coursename: name} = course;
console.log(name);