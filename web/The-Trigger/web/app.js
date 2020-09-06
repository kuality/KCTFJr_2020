const express = require('express');
const lodash = require('lodash');
const Handlebars = require('handlebars');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.json());

app.get('/', function(req, res){
    res.end('Hello! This is index!');
});

app.post('/note', function(req, res){
    
    var contents = req.params.content;
    var chance = req.body.chance;

    if(typeof contents === "undefined"){
        contents = 'Empty';
    }
    if(typeof chance !== "undefined"){
        for (var key in chance){
            lodash.zipObjectDeep([key],[chance[key]]);
        }
    }

    var template = Handlebars.compile(contents);
    try{
        res.end(template({}));
    }catch(e){
        res.end('Server Occured an error. But, If your payload is right, you already get shell.');
    }
});

const server = app.listen(3000, function(){
    console.log("server stared");
});