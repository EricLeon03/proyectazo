CREATE DATABASE videojuego;

DROP DATABASE IF EXISTS videojuego; CREATE DATABASE videojuego;

USE videojuego;

CREATE TABLE jugadores (nombre TEXT,
 id INTEGER,
password INTEGER
 edad INTEGER,
 puntuacion_total INTEGER,
 victorias INTEGER
partidas_jugadas INTEGER
);

CREATE TABLE partidas (id INTEGER,
 lugar TEXT,
fecha_hora DATETIME
);

CREATE TABLE enfrentamientos (id_j1 INTEGER,
 id_j2 Integer,
 ganador TEXT
);

INSERT INTO jugadores (nombre,id,password,edad,puntuacion_total,victorias,partidas_jugadas) VALUES
('Colega',1234,1212,23,55,2,4);

INSERT INTO jugadores (nombre,id,password,edad,puntuacion_total,victorias,partidas_jugadas) VALUES
('Erian',6789,1441,22,33,1,3);

INSERT INTO jugadores (nombre,id,password,edad,puntuacion_total,victorias,partidas_jugadas) VALUES
('Vector',2468,7272,20,98,4,6);

INSERT INTO jugadores (nombre,id,password,edad,puntuacion_total,victorias,partidas_jugadas) VALUES
('Masol',1379,2321,21,75,3,8);

INSERT INTO partidas (id,lugar,fecha_hora) VALUES 
(1111,Outlet,);

INSERT INTO partidas (id,lugar,fecha_hora) VALUES 
(2222,LaRoca,);

INSERT INTO partidas (id,lugar,fecha_hora) VALUES 
(3452,Insitu,);

INSERT INTO partidas (id,lugar,fecha_hora) VALUES 
(2156,Bishmillah,)

INSERT INTO enfrentamientos (id_j1,id_j2,ganador) VALUES
(1234,5678,'Colega');

INSERT INTO enfrentamientos (id_j1,id_j2,ganador) VALUES
(1379,2468,'Vectir');