parser grammar CParser;

options { tokenVocab=C; }

parse
    :   ( ~EOF )* EOF
    ;
