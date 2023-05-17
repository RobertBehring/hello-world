const express = require('express');
const cors = require('cors');
const mongoose = require('mongoose');
// const {MongoClient, ServerApiVersion} = require("mongodb");

require('dotenv').config();

const app = express();
const port = process.env.PORT || 5000;

app.use(cors());
app.use(express.json());

const uri = process.env.ATLAS_URI;
mongoose.connect(uri, {useNewUrlParser: true});

const connection = mongoose.connection;
connection.once('open', () => {
    console.log("MongoDB database connection established successfully");
})

// const client = new MongoClient(uri, {
//     serverApi: {
//         version: ServerApiVersion.v1,
//         strict: true,
//         deprecationErrors:true,
//     }
// });
//
// async function run() {
//     try {
//         await client.connect();
//         await client.db("admin").command({ping:1});
//         console.log("MongoDB database connection established successfully");
//     } finally {
//         await client.close();
//     }
// }
// run().catch(console.dir);

const exercisesRouter = require('./routes/exercises');
const usersRouter = require('./routes/users');

app.use('/exercises', exercisesRouter);
app.use('/users', usersRouter);

app.listen(port, () => {
    console.log(`Server is running on port: ${port}`);
});