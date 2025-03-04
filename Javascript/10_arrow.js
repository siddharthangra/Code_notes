
const user = {
    username: "Siddharth",
    Age: 19,

    welcomeMessage: function(){
        console.log(`${this.username}, welcome to Website.`)
        console.log(this);
    }
    
}

user.welcomeMessage();
user.username = "Sid";
user.welcomeMessage();

console.log(this);

//This is used to use to vraibles in given context/scope
//this is why console.log(this); at line 16 gives empty brackets cause global scoppe is empty 
// while at the same time at line 7 give output cause user scope is filed!

function chai(){
    let username = "Siddharth"
    console.log(this);
    console.log(this.username);
    
}

chai();
//This cannot be used in function


/********************ARROW FUNCTIONS******************* */

const addTwo = (num1, num2) => num1 + num2 
// arrow function can let you use function without scope
const name= () => ({username: "Siddharth"});
console.log(name());

