//FOr loops

/*
for (let index = 0; index < array.length; index++) {
    const element = array[index];
    
}
*/

for (let i =1 ; i<= 20; i++){
    if (i == 5){
        console.log(`Detected 5`);
        break; //Break exists the first loop
    }
    if (i==6){
        console.log(`Detected 6`);
        continue; //skips the rest of the code for that instance 
    }
    console.log(`value of i is ${i} `);
}

//While loops
 /*
while (condition) {
    
}
*/

let index = 0;
while(index < 10){
    console.log(index);
    index ++
}

// DO while loop
/*
do {
    
} while (condition);
*/

let score = 1;
do{
    console.log(`Score is ${score}`);
    score ++
}while(score<10);

/* try chanigng score >10,
as do-while runs first and check condition later on, it will runs atleast once and print*/

// For of
/*
for (const iterator of object) {
    
} */

const arr = [1,2,3,4,5]
for ( const num of arr){
    console.log(num);
}
const greetings = "Hello World!";
for (const greet of greetings){
    console.log(greet);
}

//Maps
const map = new Map();
map.set('In', "India");
map.set ('USA', "United states of America");
map.set('Fr', "France");
map.set('In', "India");
console.log(map);
//Map makes a set of unique values

for(const key of map){
    console.log(key);
}

for(const [key,value] of map){
    console.log(key);
    console.log(key , ":-" ,  value);
} //this method of destructing the map can't be used in object using for-of loop


const newobject = {
    Js:  "javascript",
    cpp : "C++",
    rb: "ruby",
}

for (const key in newobject){
    console.log(newobject[key]);
}

//FOr each loop {specifically made for arrays }
const coding = ["js", "ruby", "java", "C++"];
coding.forEach( (item) => {
    console.log(item);
})

function Iknow(item){
    console.log(`I know ${item}`);
}
coding.forEach(Iknow);