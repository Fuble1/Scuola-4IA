
var input;
var txt;

function main(){
    avvio();
    appendToList();
}


function avvio(){
    let p = fetch("https://catfact.ninja/fact");
    p.then(function(arg){
	    let t = arg.text();
	    t.then(function(txt){
		    input = txt;
            txt = " ";
	    });
    });
}


function appendToList(){
    // Create an "li" node:
    const node = document.createElement("li");

    // Create a text node:
    const textnode = document.createTextNode(input);

    // Append the text node to the "li" node:
    node.appendChild(textnode);

    // Append the "li" node to the list:
    document.getElementById("out").appendChild(node);
    

}