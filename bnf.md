## 2 The Grammar 

| Construct | Syntax | Example|
|------------|---------|--------|
| non-terminal symbols | boldface | ClassExpression|
| terminal symbols | single quoted | 'PropertyRange'|
| zero or more | curly braces | { ClassExpression }|
| zero or one | square brackets | [ ClassExpression ]|
| alternative | vertical bar | Assertion | Declaration|
| grouping | parentheses | dataPropertyExpression ) |

```
<NT>List ::= <NT> { ',' <NT> }
<NT>2List ::= <NT> ',' <NT>List 
<NT>AnnotatedList ::= [annotations] <NT> { ',' [annotations] <NT> }
```

## 2.1 IRIs, Integers, Literals, and Entities  
```
fullIRI := an IRI as defined in [RFC 3987], enclosed in a pair of < (U+3C) and > (U+3E) characters
prefixName := a finite sequence of characters matching the PNAME_NS production of [SPARQL] and not matching any of the keyword terminals of the syntax
abbreviatedIRI := a finite sequence of characters matching the PNAME_LN production of [SPARQL]
simpleIRI := a finite sequence of characters matching the PN_LOCAL production of [SPARQL] and not matching any of the keyword terminals of the syntax
IRI := fullIRI | abbreviatedIRI | simpleIRI

nonNegativeInteger ::= zero | positiveInteger
positiveInteger ::= nonZero { digit }
digits ::= digit { digit }
digit ::= zero | nonZero
nonZero := '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9'
zero ::= '0'

classIRI ::= IRI
Datatype ::= datatypeIRI | 'integer' | 'decimal' | 'float' | 'string'
datatypeIRI ::= IRI
objectPropertyIRI ::= IRI
dataPropertyIRI ::= IRI
annotationPropertyIRI ::= IRI
individual ::= individualIRI | nodeID
individualIRI ::= IRI
nodeID := a finite sequence of characters matching the BLANK_NODE_LABEL production of [SPARQL]

literal ::= typedLiteral | stringLiteralNoLanguage | stringLiteralWithLanguage | integerLiteral | decimalLiteral | floatingPointLiteral
typedLiteral ::= lexicalValue '^^' Datatype
stringLiteralNoLanguage ::= quotedString
stringLiteralWithLanguage ::= quotedString languageTag
languageTag := @ (U+40) followed a nonempty sequence of characters matching the langtag production from [BCP 47]
lexicalValue ::= quotedString
quotedString := a finite sequence of characters in which " (U+22) and \ (U+5C) occur only in pairs of the form \" (U+5C, U+22) and \\ (U+5C, U+5C), enclosed in a pair of " (U+22) characters
floatingPointLiteral ::= [ '+' | '-'] ( digits ['.'digits] [exponent] | '.' digits[exponent]) ( 'f' | 'F' )
exponent ::= ('e' | 'E') ['+' | '-'] digits
decimalLiteral ::= ['+' | '-'] digits '.' digits
integerLiteral ::= ['+' | '-'] digits

entity ::= 'Datatype' '(' Datatype ')' | 'Class' '(' classIRI ')' | 'ObjectProperty' '(' objectPropertyIRI ')' | 'DataProperty' '('dataPropertyIRI ')' | 'AnnotationProperty' '(' annotationPropertyIRI ')' | 'NamedIndividual' '(' individualIRI ')' 
```
