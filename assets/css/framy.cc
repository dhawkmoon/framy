/*
 * Global Vars
 */
/*
 * Global Mixins - Transformations & Transitions
 */
/*
 * Global Mixins - Flex Layout
 */
body {
  font-family: 'Helvetica Neue', Helvetica, Arial, sans-serif;
  line-height: 1.399999;
  font-size: 18px;
  margin: 0; }

* {
  box-sizing: border-box; }

/*
 * Headings
 */
h1, h2, h3, h4, h5, h6 {
  font-weight: normal;
  margin-top: 1em;
  margin-bottom: 1em; }

h1 {
  font-size: 2em; }

h2 {
  font-size: 1.5em; }

h3 {
  font-size: 1.2em; }

/*
 * Subheadings
 */
.sub-heading {
  display: block; }

h1 + .sub-heading {
  font-size: 1em;
  margin-top: -1.7em; }

h2 + .sub-heading {
  font-size: .9em;
  margin-top: -1.6em; }

p {
  margin-bottom: 1em; }

/*
 * Formatting
 */
pre, plaintext, listing, xmp {
  font-family: monospace; }

pre {
  display: block;
  color: #111;
  font-size: 14px;
  background-color: #e4f6ee;
  padding: 5px;
  border: 1px solid #ddd;
  overflow-y: auto; }

.pre--stressed {
  background-color: #e4f6ee;
  border: 1px solid #ddd; }

code {
  font-size: .8em;
  display: inline-block;
  margin-bottom: 15px;
  background-color: #e4f6ee;
  padding: 3px; }

.text-left {
  text-align: left; }

.text-center {
  text-align: center; }

.text-right {
  text-align: right; }

.text-justify {
  text-align: justify; }

/*
 * Grid system
 */
.container, .container-fluid {
  padding-left: 15px;
  padding-right: 15px;
  margin-left: auto;
  margin-right: auto; }

.container-fluid {
  width: 100%; }

/*
 * None Flex Layout
 */
.row {
  display: block; }

[class^="col-"] {
  display: block;
  float: left; }

.col {
  display: table-cell; }
  .col--reverse {
    flex-direction: column-reverse !important; }

.row-auto {
  display: block; }

/*
 * Flex Supports
 */
.row {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
  margin-left: -15px;
  margin-right: -15px; }
  .row--reverse {
    flex-direction: row-reverse !important; }

.row.row--full-height {
  height: 100vh; }

.row.row--auto {
  flex-wrap: nowrap; }

.row:after {
  content: '';
  display: block;
  clear: both; }

[class^="col-"],
.col {
  width: 100%; }

[class^="col-"],
.col {
  padding-left: 15px;
  padding-right: 15px;
  background-clip: content-box; }

.items-center {
  align-items: center; }

.items-start {
  align-items: flex-start; }

.items-end {
  align-items: flex-end; }

.items-stretch {
  align-items: stretch; }

.self-center {
  align-self: center; }

.self-start {
  align-self: flex-start; }

.self-end {
  align-self: flex-end; }

.self-stretch {
  align-self: stretch; }

/*
 * Media Queries
 */
@media all and (min-width: 0px) {
  .col-xs-12 {
    width: 100%; }

  .col-xs-11 {
    width: 91.66666666666663%; }

  .col-xs-10 {
    width: 83.33333333333333%; }

  .col-xs-9 {
    width: 74.99999999999997%; }

  .col-xs-8 {
    width: 66.6666669%; }

  .col-xs-7 {
    width: 58.3333333333333331%; }

  .col-xs-6 {
    width: 50%; }

  .col-xs-5 {
    width: 41.66666666666665%; }

  .col-xs-4 {
    width: 33.333333333333%; }

  .col-xs-3 {
    width: 25%; }

  .col-xs-2 {
    width: 16.6666666666666%; }

  .col-xs-1 {
    width: 8.3333333333333%; }

  .col-xs-offset-0 {
    margin-left: 0; }

  .col-xs-offset-1 {
    margin-left: 8.3333333333333%; }

  .col-xs-offset-2 {
    margin-left: 16.6666666666666%; }

  .col-xs-offset-3 {
    margin-left: 25%; }

  .col-xs-offset-4 {
    margin-left: 33.333333333333%; }

  .col-xs-offset-5 {
    margin-left: 41.66666666666665%; }

  .col-xs-offset-6 {
    margin-left: 50%; }

  .col-xs-offset-7 {
    margin-left: 58.3333333333333331%; }

  .col-xs-offset-8 {
    margin-left: 66.6666669%; }

  .col-xs-offset-9 {
    margin-left: 74.99999999999997%; }

  .col-xs-offset-10 {
    margin-left: 83.33333333333333%; }

  .col-xs-offset-11 {
    margin-left: 91.66666666666663%; }

  .col-xs-offset-12 {
    margin-left: 100%; } }
@media all and (max-width: 768px) {
  .container, .container-fluid {
    width: 100%;
    max-width: 768px; }

  .row {
    flex-direction: column; }

  .row-xs {
    flex-direction: row; }

  .hidden-xs {
    display: none; }

  .xs-items-center {
    align-items: center; }

  .xs-items-start {
    align-items: flex-start; }

  .xs-items-end {
    align-items: flex-end; }

  .xs-items-stretch {
    align-items: stretch; }

  pre {
    max-width: 100%;
    overflow: auto; } }
@media all and (min-width: 769px) {
  .container, .container-fluid {
    width: 100%;
    max-width: 960px; }

  .col-sm-12 {
    width: 100%; }

  .col-sm-11 {
    width: 91.66666666666663%; }

  .col-sm-10 {
    width: 83.33333333333333%; }

  .col-sm-9 {
    width: 74.99999999999997%; }

  .col-sm-8 {
    width: 66.6666669%; }

  .col-sm-7 {
    width: 58.3333333333333331%; }

  .col-sm-6 {
    width: 50%; }

  .col-sm-5 {
    width: 41.66666666666665%; }

  .col-sm-4 {
    width: 33.333333333333%; }

  .col-sm-3 {
    width: 25%; }

  .col-sm-2 {
    width: 16.6666666666666%; }

  .col-sm-1 {
    width: 8.3333333333333%; }

  .col-sm-offset-0 {
    margin-left: 0; }

  .col-sm-offset-1 {
    margin-left: 8.3333333333333%; }

  .col-sm-offset-2 {
    margin-left: 16.6666666666666%; }

  .col-sm-offset-3 {
    margin-left: 25%; }

  .col-sm-offset-4 {
    margin-left: 33.333333333333%; }

  .col-sm-offset-5 {
    margin-left: 41.66666666666665%; }

  .col-sm-offset-6 {
    margin-left: 50%; }

  .col-sm-offset-7 {
    margin-left: 58.3333333333333331%; }

  .col-sm-offset-8 {
    margin-left: 66.6666669%; }

  .col-sm-offset-9 {
    margin-left: 74.99999999999997%; }

  .col-sm-offset-10 {
    margin-left: 83.33333333333333%; }

  .col-sm-offset-11 {
    margin-left: 91.66666666666663%; }

  .col-sm-offset-12 {
    margin-left: 100%; }

  .sm-items-center {
    align-items: center; }

  .sm-items-start {
    align-items: flex-start; }

  .sm-items-end {
    align-items: flex-end; }

  .sm-items-stretch {
    align-items: stretch; } }
@media all and (min-width: 991px) {
  .container, .container-fluid {
    width: 100%;
    max-width: 1024px; }

  .col-md-12 {
    width: 100%; }

  .col-md-11 {
    width: 91.66666666666663%; }

  .col-md-10 {
    width: 83.33333333333333%; }

  .col-md-9 {
    width: 74.99999999999997%; }

  .col-md-8 {
    width: 66.6666669%; }

  .col-md-7 {
    width: 58.3333333333333331%; }

  .col-md-6 {
    width: 50%; }

  .col-md-5 {
    width: 41.66666666666665%; }

  .col-md-4 {
    width: 33.333333333333%; }

  .col-md-3 {
    width: 25%; }

  .col-md-2 {
    width: 16.6666666666666%; }

  .col-md-1 {
    width: 8.3333333333333%; }

  .col-md-offset-0 {
    margin-left: 0; }

  .col-md-offset-1 {
    margin-left: 8.3333333333333%; }

  .col-md-offset-2 {
    margin-left: 16.6666666666666%; }

  .col-md-offset-3 {
    margin-left: 25%; }

  .col-md-offset-4 {
    margin-left: 33.333333333333%; }

  .col-md-offset-5 {
    margin-left: 41.66666666666665%; }

  .col-md-offset-6 {
    margin-left: 50%; }

  .col-md-offset-7 {
    margin-left: 58.3333333333333331%; }

  .col-md-offset-8 {
    margin-left: 66.6666669%; }

  .col-md-offset-9 {
    margin-left: 74.99999999999997%; }

  .col-md-offset-10 {
    margin-left: 83.33333333333333%; }

  .col-md-offset-11 {
    margin-left: 91.66666666666663%; }

  .col-md-offset-12 {
    margin-left: 100%; }

  .md-items-center {
    align-items: center; }

  .md-items-start {
    align-items: flex-start; }

  .md-items-end {
    align-items: flex-end; }

  .md-items-stretch {
    align-items: stretch; } }
@media all and (min-width: 1201px) {
  .col-lg-12 {
    width: 100%; }

  .col-lg-11 {
    width: 91.66666666666663%; }

  .col-lg-10 {
    width: 83.33333333333333%; }

  .col-lg-9 {
    width: 74.99999999999997%; }

  .col-lg-8 {
    width: 66.6666669%; }

  .col-lg-7 {
    width: 58.3333333333333331%; }

  .col-lg-6 {
    width: 50%; }

  .col-lg-5 {
    width: 41.66666666666665%; }

  .col-lg-4 {
    width: 33.333333333333%; }

  .col-lg-3 {
    width: 25%; }

  .col-lg-2 {
    width: 16.6666666666666%; }

  .col-lg-1 {
    width: 8.3333333333333%; }

  .col-lg-offset-0 {
    margin-left: 0; }

  .col-lg-offset-1 {
    margin-left: 8.3333333333333%; }

  .col-lg-offset-2 {
    margin-left: 16.6666666666666%; }

  .col-lg-offset-3 {
    margin-left: 25%; }

  .col-lg-offset-4 {
    margin-left: 33.333333333333%; }

  .col-lg-offset-5 {
    margin-left: 41.66666666666665%; }

  .col-lg-offset-6 {
    margin-left: 50%; }

  .col-lg-offset-7 {
    margin-left: 58.3333333333333331%; }

  .col-lg-offset-8 {
    margin-left: 66.6666669%; }

  .col-lg-offset-9 {
    margin-left: 74.99999999999997%; }

  .col-lg-offset-10 {
    margin-left: 83.33333333333333%; }

  .col-lg-offset-11 {
    margin-left: 91.66666666666663%; }

  .col-lg-offset-12 {
    margin-left: 100%; }

  .lg-items-center {
    align-items: center; }

  .lg-items-start {
    align-items: flex-start; }

  .lg-items-end {
    align-items: flex-end; }

  .lg-items-stretch {
    align-items: stretch; } }
/*
 * Outers
 */
.outer {
  position: relative;
  padding-bottom: 15px;
  padding-top: 1px; }
  .outer--stressed {
    background-color: #fafafa; }

/*
 * Lists
 */
ul {
  padding-left: 2em; }

.list--unstyled {
  padding-left: 0;
  list-style: none; }

.list--dotted,
.list--circled,
.list--squared,
.list--squared-o,
.list--rhombused,
.list--rhombused-o,
.list--arrowed {
  padding-left: 1em;
  list-style: none; }

.list--circled li:before,
.list--dotted li:before,
.list--squared li:before,
.list--squared-o li:before,
.list--arrowed li:before,
.list--rhombused li:before,
.list--rhombused-o li:before {
  content: '';
  position: relative;
  display: inline-block;
  width: .5em;
  height: .5em;
  border: 1px solid black;
  border-radius: 50%;
  margin-right: 1em;
  top: -0.1rem;
  background-color: black; }

.list--colored li:before {
  border-color: #0cad62;
  background-color: #0cad62; }

.list--circled li:before,
.list--squared-o li:before,
.list--rhombused-o li:before,
.list--arrowed li:before {
  background-color: transparent; }

.list--squared li:before,
.list--squared-o li:before,
.list--rhombused li:before,
.list--rhombused-o li:before,
.list--arrowed li:before {
  border-radius: 0; }

.list--rhombused li:before,
.list--rhombused-o li:before,
.list--arrowed li:before {
  -webkit-transform: rotate(45deg);
  -o-transform: rotate(45deg);
  -ms-transform: rotate(45deg);
  transform: rotate(45deg); }

.list--arrowed li:before {
  border-left-color: transparent;
  border-bottom-color: transparent;
  width: .3em;
  height: .3em;
  top: -0.15rem; }

/*
 * Tables
 */
.table {
  width: 100%;
  table-layout: fixed;
  border-collapse: collapse;
  margin-bottom: 15px; }

.table caption {
  font-size: 1em;
  margin-bottom: 15px; }

.table td {
  border: 1px solid #ddd;
  padding: 5px; }

.table th {
  background-color: #ddd;
  padding: 10px; }

.table--striped tr:nth-child(odd) {
  background-color: #fafafa; }

.table--colored th {
  background-color: #0cad62; }

.table--colored.table--striped tr:nth-child(odd) {
  background-color: #e4f6ee; }

.table--no-border td {
  border: none; }

.table--border-bottom td {
  border-top: none;
  border-left: none;
  border-right: none; }

.table--no-frame td:first-child {
  border-left: none; }

.table--no-frame td:last-child {
  border-right: none; }

.table--no-frame tr:last-child td {
  border-bottom: none; }

.table--row-highlight tr:hover {
  background-color: #e4f6ee; }

/*
 * Navs
 */
nav > ul {
  padding: 0;
  list-style: none;
  display: flex;
  flex-direction: row;
  margin-top: 15px;
  margin-bottom: 0; }

nav li {
  position: relative; }

nav > ul > li > a {
  display: block;
  padding: 8px 12px;
  border-bottom: 2px solid #ddd;
  margin: 0 5px;
  font-size: .9em;
  text-decoration: none;
  color: black; }

nav > ul > li > a:hover,
nav > ul > li > a:active,
nav > ul > li > a.tab--active {
  color: #0cad62;
  border-color: #0cad62; }

.nav--center ul {
  justify-content: center; }

.nav--start ul {
  justify-content: flex-start; }

.nav--end ul {
  justify-content: flex-end; }

.nav--filled a {
  background-color: #fafafa; }

nav > ul ul {
  position: absolute;
  left: 8px;
  list-style: none;
  padding: 0;
  min-width: 170px;
  background-color: #fff;
  box-shadow: 1px 1px 2px silver;
  display: none; }

nav > ul ul a {
  display: block;
  font-size: .9em;
  padding: .6em 1.2em;
  animation-name: fadeIn;
  -webkit-animation-name: fadeIn;
  animation-duration: .3s;
  -webkit-animation-duration: .3s;
  text-decoration: none;
  color: black; }

nav > ul ul a:hover {
  background-color: #0cad62;
  color: white; }

nav li:hover > ul {
  display: block; }

nav ul ul > li > ul {
  left: 100%;
  top: 0; }

nav li.has-children > a:after {
  content: '';
  position: relative;
  display: inline-block;
  width: .4em;
  height: .4em;
  border: 1px solid #0cad62;
  margin-left: 1em;
  top: -0.3em;
  background-color: transparent;
  transform: rotate(45deg);
  -webkit-transform: rotate(45deg);
  border-left-color: transparent;
  border-top-color: transparent;
  -webkit-transition: .3s linear;
  -o-transition: .3s linear;
  transition: .3s linear; }

nav li.has-children:hover > a:after {
  top: 0;
  transform: rotate(225deg);
  -webkit-transform: rotate(225deg); }

/*
 * Buttons
 */
.btn {
  display: inline-block;
  font: inherit;
  font-size: 1em;
  padding: 15px;
  border-radius: 3px;
  background-color: #0cad62;
  color: white;
  border: none;
  border-bottom: 2px solid #075f39;
  cursor: pointer;
  margin-top: 15px;
  margin-bottom: 15px;
  margin-right: 15px;
  min-width: 140px;
  text-align: center; }

.btn-xs {
  font-size: 12px;
  padding: 11px; }

.btn-sm {
  font-size: 14px;
  padding: 13px; }

.btn-md {
  font-size: 16px;
  padding: 15px; }

.btn-lg {
  font-size: 24px;
  padding: 23px; }

.btn:not(.btn-o):active,
.btn:not(.btn-o):disabled,
.btn--disabled {
  background-color: #79f6bc;
  border-bottom-color: #79f6bc; }

.btn--disabled {
  cursor: default; }

.btn-o {
  color: #0cad62;
  border: 1px solid #0cad62;
  background-color: transparent; }

.btn-o:not(.btn--disabled):hover {
  color: white;
  background-color: #0cad62; }

.btn-o.btn--disabled,
.btn-o:disabled {
  border-color: #ddd;
  color: #ddd; }

p + .btn {
  margin-top: 0; }

/*
 * Cards
 */
.card-header,
.card-body,
.card-footer {
  padding: 15px;
  border: 1px solid #ddd;
  box-shadow: 1px 1px 2px #fafafa;
  background-color: #fff; }

.card-body,
.card-footer {
  border-top: none; }

.card-header {
  margin-top: 15px;
  border-radius: 5px 5px 0 0; }

.card-footer {
  margin-bottom: 15px;
  border-radius: 0 0 5px 5px; }

.card-footer--main-color-bg,
.card-header--main-color-bg,
.card-body--main-color-bg {
  color: white; }

/*
[class^="col-"] > [class^="card-"]{
	margin-left:-15px;
	margin-right: -15px;
}
*/
/*
 * Modals
 */
.modal-overlay {
  position: fixed;
  left: 0;
  top: 0;
  width: 100vw;
  height: 100vh;
  z-index: 9999;
  animation-name: fadeIn;
  animation-duration: 0.3s;
  -webkit-animation-name: fadeIn;
  -webkit-animation-duration: 0.3s;
  -ms-animation-name: fadeIn;
  -webkit-animation-duration: 0.3s;
  background-color: rgba(0, 0, 0, 0.6);
  display: none; }

.modal-wrapper {
  position: fixed;
  left: 0;
  top: 10%;
  right: 0;
  margin: auto;
  width: 600px;
  min-height: 150px;
  background-color: #fafafa;
  box-shadow: 2px 2px 6px rgba(0, 0, 0, 0.4);
  animation-name: fadeIn;
  animation-duration: 0.3s;
  -webkit-animation-name: fadeIn;
  -webkit-animation-duration: 0.3s;
  -ms-animation-name: fadeIn;
  -webkit-animation-duration: 0.3s;
  z-index: 99999;
  display: none; }

.modal-xs {
  width: 300px; }

.modal-sm {
  width: 450px; }

.modal-md {
  width: 600px; }

.modal-lg {
  width: 900px; }

.modal-header {
  position: relative;
  padding: 15px;
  border-bottom: 1px solid #ddd; }

.modal-header--main-color-bg .modal-title,
.modal-header--main-color-bg .modal-closer {
  color: white; }

.modal-title {
  margin: 0; }

.modal-closer {
  position: absolute;
  right: 15px;
  top: 15px;
  font-size: 24px;
  line-height: .6em;
  cursor: pointer; }

.modal-body {
  min-height: 150px;
  max-height: 60vh;
  padding: 0 15px;
  overflow-y: auto; }

.modal-footer {
  border-top: 1px solid #ddd; }

.modal-overlay--opened,
.modal--opened {
  display: block; }

body.modal--opened {
  overflow: hidden; }

/*
 * Forms - togglers
 */
input[type="checkbox"].checkbox-toggler {
  display: none; }

input[type="checkbox"].checkbox-toggler + label {
  display: inline-block;
  position: relative;
  width: calc(4em - 4px);
  height: 2em;
  margin-bottom: 15px;
  border-radius: 1em;
  border: 1px solid #ddd;
  background-color: #ddd;
  cursor: pointer;
  transition: .3s linear;
  background-color: #fafafa; }

input[type="checkbox"].checkbox-toggler + label:after {
  content: '';
  display: block;
  position: absolute;
  width: calc(2em - 4px);
  height: calc(2em - 4px);
  top: 1px;
  left: 1px;
  border-radius: 50%;
  -webkit-transition: .3s linear;
  -o-transition: .3s linear;
  transition: .3s linear;
  background-color: white;
  box-shadow: 1px 1px 2px silver; }

input[type="checkbox"].checkbox-toggler.checkbox-toggler--colored + label {
  background-color: #ad0c0c; }

input[type="checkbox"].checkbox-toggler:checked + label {
  background-color: #0cad62; }

input[type="checkbox"].checkbox-toggler:checked + label:after {
  transform: translateX(100%);
  -webkit-transform: translateX(100%); }

input[type="checkbox"].checkbox-toggler.checkbox-toggler--squared + label {
  border-radius: 0; }

input[type="checkbox"].checkbox-toggler.checkbox-toggler--squared + label:after {
  content: '=';
  text-align: center;
  color: #ddd;
  border-radius: 0;
  line-height: 1.7em; }

input[type="checkbox"].checkbox-toggler:disabled + label {
  cursor: default; }

input[type="checkbox"].checkbox-toggler:disabled + label:after {
  background-color: transparent; }

/*
 * Forms - checkboxes
 */
.checkbox {
  display: none; }

.checkbox + label {
  position: relative;
  cursor: pointer;
  padding-left: 1.4em; }

.checkbox + label:before {
  content: '';
  display: inline-block;
  position: absolute;
  left: 0;
  top: .2em;
  margin-right: .7em;
  width: .7em;
  height: .7em;
  border: 1px solid #ddd;
  background-color: #fafafa; }

.checkbox:checked + label:after {
  content: '';
  display: inline-block;
  position: absolute;
  box-sizing: border-box;
  top: .25em;
  left: .05em;
  margin-left: 2px;
  margin-top: 2px;
  width: calc(.6em - 2px);
  height: calc(.45em - 2px);
  border: .12em solid #0cad62;
  border-top: none;
  border-right: none;
  transform: rotate(-35deg); }

.checkbox.checkbox--squared:checked + label:after {
  content: '';
  display: inline-block;
  position: absolute;
  box-sizing: border-box;
  top: .2em;
  left: 0;
  margin-left: 2px;
  margin-top: 2px;
  width: calc(.7em - 2px);
  height: calc(.7em - 2px);
  background-color: #0cad62;
  transform: none; }

/*
 * Forms - radio buttons
 */
.radio {
  display: none; }

.radio + label {
  position: relative;
  cursor: pointer;
  padding-left: 1.4em; }

.radio + label:before {
  content: '';
  display: inline-block;
  position: absolute;
  left: 0;
  top: .2em;
  margin-right: .7em;
  width: .7em;
  height: .7em;
  border: 1px solid #ddd;
  border-radius: 50%;
  background-color: #fafafa; }

.radio:checked + label:after {
  content: '';
  display: inline-block;
  position: absolute;
  box-sizing: border-box;
  top: .2em;
  left: 0;
  margin-left: 2px;
  margin-top: 2px;
  width: calc(.7em - 2px);
  height: calc(.7em - 2px);
  background-color: #0cad62;
  transform: none;
  border-radius: 50%; }

.radio-toggler-wrapper {
  display: inline-flex;
  flex-wrap: wrap; }

.radio-toggler {
  display: none; }

.radio-toggler + label {
  display: inline-block;
  padding: .2em .5em;
  border: 1px solid #ddd;
  border-right-color: transparent;
  cursor: pointer;
  background-color: #fafafa;
  box-shadow: 1px 1px 1px #fafafa; }

.radio-toggler + label:nth-child(2) {
  border-right: none;
  border-radius: .75em 0 0 .75em; }

.radio-toggler + label:last-child {
  border-right-color: #ddd;
  border-radius: 0 .75em .75em 0; }

.radio-toggler:checked + label {
  background-color: #0cad62;
  color: white;
  border-color: #0cad62; }

.radio-toggler:disabled + label {
  color: #ddd;
  cursor: default; }

@media all and (max-width: 768px) {
  .radio-toggler + label {
    font-size: .7em; } }
/*
 * Forms - textfields
 */
.textfield {
  display: block;
  width: 100%;
  border: 1px solid #ddd;
  padding: 8px;
  font-size: 1em;
  outline: none;
  margin-bottom: 15px; }

label + .textfield {
  margin-top: 15px; }

.textfield--inline {
  display: inline-block;
  width: auto;
  margin-left: 15px; }

.textfield--success {
  border-color: #0cad62;
  background-color: #e4f6ee; }

.textfield--error {
  border-color: #ad0c0c;
  background-color: #f6e4e4; }

.textfield-xs {
  font-size: .6em;
  padding: 4px; }

.textfield-sm {
  font-size: .8em;
  padding: 6px; }

.textfield-lg {
  font-size: 1.2em;
  padding: 8px; }

/*
 * Tabs
 */
.tabs-header ul {
  flex-wrap: wrap; }

.tabs-body {
  position: relative; }

.tabs-page {
  display: none;
  min-height: 150px;
  padding: 0 8px;
  animation-name: fadeIn;
  animation-duration: 0.3s;
  -webkit-animation-name: fadeIn;
  -webkit-animation-duration: 0.3s;
  -ms-animation-name: fadeIn;
  -webkit-animation-duration: 0.3s; }

.tabs-page--open {
  display: block; }

.tabs-header--squared,
.tabs-header--rounded {
  border-bottom: 1px solid #ddd; }

.tabs-header--squared a,
.tabs-header--rounded a {
  border: 1px solid #ddd;
  border-bottom: none; }

.tabs-header--rounded a {
  border-radius: 5px 5px 0 0; }

.tabs-header--squared a:hover,
.tabs-header--squared a:active,
.tabs-header--squared a.tab--active,
.tabs-header--rounded a:hover,
.tabs-header--rounded a:active,
.tabs-header--rounded a.tab--active,
.tabs-header--togglered a:active,
.tabs-header--togglered a.tab--active {
  background-color: #0cad62;
  color: white; }

.tabs-header--no-margin a {
  margin: 0; }

.tabs-header--togglered a {
  border: 1px solid #ddd;
  background-color: #fafafa;
  border-right: none;
  padding: .3em .6em;
  margin: 0;
  box-shadow: 1px 1px 1px #fafafa; }

.tabs-header--togglered li:first-child a {
  border-radius: 15px 0 0 15px; }

.tabs-header--togglered li:last-child a {
  border-radius: 0 15px 15px 0;
  border-right: 1px solid #ddd; }

.tabs-header--togglered a:not(.tab--active):hover {
  border-color: #ddd;
  color: inherit; }

/*
 * Popover
 */
[data-framy="popover"] {
  position: relative;
  cursor: help; }

[data-framy="popover"]:after {
  content: attr(data-content);
  position: absolute;
  width: 150px;
  background: silver;
  font-size: 14px;
  line-height: 1;
  padding: 8px;
  display: none;
  border-radius: 2px;
  color: black;
  cursor: default;
  box-shadow: 1px 1px 1px rgba(0, 0, 0, 0.4);
  -webkit-box-shadow: 1px 1px 1px rgba(0, 0, 0, 0.4); }

[data-framy="popover"][data-position="bottom"]:after {
  display: none;
  bottom: 0;
  left: 0;
  right: 0;
  margin-left: auto;
  margin-right: auto;
  -webkit-transform: translateY(calc(100% + 15px));
  -o-transform: translateY(calc(100% + 15px));
  -ms-transform: translateY(calc(100% + 15px));
  transform: translateY(calc(100% + 15px)); }

[data-framy="popover"][data-position="bottom"]:before {
  content: '';
  position: absolute;
  display: none;
  width: 0;
  bottom: -15px;
  left: 0;
  right: 0;
  margin-left: auto;
  margin-right: auto;
  border: 8px solid silver;
  border-top-color: transparent;
  border-left-color: transparent;
  border-right-color: transparent; }

[data-framy="popover"][data-position="right"]:after {
  display: none;
  right: 0;
  top: 0;
  -webkit-transform: translateY(calc(100% + 15px));
  -o-transform: translateY(calc(100% + 15px));
  -ms-transform: translateY(calc(100% + 15px));
  transform: translateY(calc(100% + 15px)); }

[data-framy="popover"][data-position="right"]:before {
  content: '';
  position: absolute;
  display: none;
  right: -15px;
  top: 1px;
  border: 8px solid silver;
  border-top-color: transparent;
  border-left-color: transparent;
  border-bottom-color: transparent; }

[data-framy="popover"][data-position="top"]:after {
  display: none;
  left: 0;
  right: 0;
  top: 0;
  margin-left: auto;
  margin-right: auto;
  -webkit-transform: translateY(calc(-100% - 15px));
  -o-transform: translateY(calc(-100% - 15px));
  -ms-transform: translateY(calc(-100% - 15px));
  transform: translateY(calc(-100% - 15px)); }

[data-framy="popover"][data-position="top"]:before {
  content: '';
  position: absolute;
  display: none;
  width: 0;
  top: -15px;
  left: 0;
  right: 0;
  margin-left: auto;
  margin-right: auto;
  border: 8px solid silver;
  border-right-color: transparent;
  border-left-color: transparent;
  border-bottom-color: transparent;
  z-index: 1; }

[data-framy="popover"]:before,
[data-framy="popover"]:after {
  animation-name: fadeIn;
  animation-duration: .4s; }

[data-framy="popover"]:hover:after {
  display: inline-table; }

[data-framy="popover"]:hover:before {
  display: block; }

.parallax {
  min-height: 100px;
  overflow-x: hidden;
  overflow-y: hidden;
  perspective: 1px;
  -webkit-perspective: 1px;
  perspective-origin-x: 100%;
  -webkit-perspective-origin-x: 100%; }

.parallax--full-screen {
  width: 100vw;
  height: 100vh; }

.parallax__layer {
  display: flex;
  justify-content: center;
  align-items: center;
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  transform-origin-x: 100%;
  -webkit-transform-origin-x: 100%;
  height: 200%; }

.parallax__layer--base {
  transform: translateZ(0);
  -webkit-transform: translateZ(0);
  z-index: 0; }

.parallax__layer--back {
  transform: translateZ(-1px) scale(2);
  -webkit-transform: translateZ(-1px) scale(2);
  z-index: -1; }

.parallax__layer--back-2 {
  transform: translateZ(-2px) scale(3);
  -webkit-transform: translateZ(-2px) scale(3);
  z-index: -2; }

.parallax__layer--back-3 {
  transform: translateZ(-3px) scale(4);
  -webkit-transform: translateZ(-3px) scale(4);
  z-index: -3; }

.parallax__layer--back-4 {
  transform: translateZ(-4px) scale(5);
  -webkit-transform: translateZ(-4px) scale(5);
  z-index: -4; }

.parallax__layer--back-5 {
  transform: translateZ(-5px) scale(6);
  -webkit-transform: translateZ(-5px) scale(6);
  z-index: -5; }

.parallax__layer--back-6 {
  transform: translateZ(-6px) scale(7);
  -webkit-transform: translateZ(-6px) scale(7);
  z-index: -6; }

/*
 * Default color scheme
 */
[class*="--main-color-txt"] {
  color: #0cad62; }

[class*="--main-color-bg"] {
  background-color: #0cad62; }

[class*="--main-color-br"] {
  border-color: #0cad62; }

.btn--main-color-bg {
  border-bottom-color: #097d47; }

.btn--main-color-bg:not(.btn-o):active {
  background-color: #0fdd7d;
  border-bottom-color: #0fdd7d; }

.btn-o.btn--main-color-br {
  border-color: #0cad62;
  color: #0cad62; }

.btn-o.btn--main-color-br:hover {
  background-color: #0cad62; }

.btn--main-color-bg:not(.btn-o):active {
  background-color: #0fdd7d;
  border-bottom-color: #0fdd7d; }

[class*="--alt-color-txt"] {
  color: #e4f6ee; }

[class*="--alt-color-bg"] {
  background-color: #e4f6ee; }

[class*="--alt-color-br"] {
  border-color: #e4f6ee; }

.btn--alt-color-bg {
  border-bottom-color: #bee9d6; }

.btn--alt-color-bg:not(.btn-o):active {
  background-color: white;
  border-bottom-color: white; }

.btn-o.btn--alt-color-br {
  border-color: #e4f6ee;
  color: #e4f6ee; }

.btn-o.btn--alt-color-br:hover {
  background-color: #e4f6ee; }

.btn--alt-color-bg:not(.btn-o):active {
  background-color: white;
  border-bottom-color: white; }

[class*="--danger-color-txt"] {
  color: #ad0c0c; }

[class*="--danger-color-bg"] {
  background-color: #ad0c0c; }

[class*="--danger-color-br"] {
  border-color: #ad0c0c; }

.btn--danger-color-bg {
  border-bottom-color: #7d0909; }

.btn--danger-color-bg:not(.btn-o):active {
  background-color: #dd0f0f;
  border-bottom-color: #dd0f0f; }

.btn-o.btn--danger-color-br {
  border-color: #ad0c0c;
  color: #ad0c0c; }

.btn-o.btn--danger-color-br:hover {
  background-color: #ad0c0c; }

.btn--danger-color-bg:not(.btn-o):active {
  background-color: #dd0f0f;
  border-bottom-color: #dd0f0f; }

[class*="--warning-color-txt"] {
  color: #ae9e0c; }

[class*="--warning-color-bg"] {
  background-color: #ae9e0c; }

[class*="--warning-color-br"] {
  border-color: #ae9e0c; }

.btn--warning-color-bg {
  border-bottom-color: #7e7309; }

.btn--warning-color-bg:not(.btn-o):active {
  background-color: #dec90f;
  border-bottom-color: #dec90f; }

.btn-o.btn--warning-color-br {
  border-color: #ae9e0c;
  color: #ae9e0c; }

.btn-o.btn--warning-color-br:hover {
  background-color: #ae9e0c; }

.btn--warning-color-bg:not(.btn-o):active {
  background-color: #dec90f;
  border-bottom-color: #dec90f; }

/*
 * Special
 */
.row--example {
  margin-bottom: 15px; }

.cloud {
  display: inline-block;
  position: relative;
  height: 2.5em;
  width: 3em;
  background-color: white;
  border-radius: 1em 1em 0 0;
  margin-top: 1em;
  margin-bottom: 1em;
  margin-right: 3.5em; }

.cloud:before {
  content: '';
  display: block;
  position: absolute;
  left: -1.5em;
  bottom: 0;
  height: 1.7em;
  width: 1.5em;
  background-color: inherit;
  border-radius: 1em 0 0 .5em; }

.cloud:after {
  content: '';
  display: block;
  position: absolute;
  right: -1.5em;
  bottom: 0;
  height: 1.9em;
  width: 1.5em;
  background-color: inherit;
  border-radius: 0 1em .5em 0; }

.cloud--extra-light {
  opacity: .3; }

.cloud--light {
  opacity: .5; }

.cloud--mid {
  opacity: .7; }

.cloud--heavy {
  opacity: .9; }

.sky-scene {
  background-color: #b8dde6; }

.whale-wrapper {
  position: relative;
  margin-top: 50px; }

.whale-body {
  position: absolute;
  width: 300px;
  height: 100px;
  background-color: #97acb9;
  border-radius: 45% 50% 50% 45%; }

.whale-tail {
  position: absolute;
  width: 200px;
  height: 50px;
  background-color: #97acb9;
  top: -17px;
  right: -90px;
  transform: rotate(-45deg);
  border-radius: 50%; }

.whale-tail:before {
  content: '';
  display: block;
  position: absolute;
  width: 70px;
  height: 20px;
  right: -35px;
  background-color: inherit;
  border-radius: 50% 50% 15% 50%;
  transform: rotate(-35deg);
  -webkit-transform: rotate(-35deg); }

.whale-tail:after {
  content: '';
  display: block;
  position: absolute;
  width: 70px;
  height: 20px;
  right: -35px;
  bottom: 0;
  background-color: inherit;
  border-radius: 50% 15% 50% 50%;
  transform: rotate(35deg);
  -webkit-transform: rotate(35deg); }

.whale-body:before {
  content: '';
  display: block;
  position: absolute;
  width: 70px;
  height: 20px;
  bottom: -20px;
  left: 90px;
  background-color: #7592a3;
  border-radius: 50% 50% 17% 35%;
  transform: rotate(35deg);
  -webkit-transform: rotate(35deg);
  z-index: -1; }

.whale-body:after {
  content: '';
  display: block;
  position: absolute;
  width: 70px;
  height: 20px;
  bottom: -20px;
  left: 115px;
  background-color: inherit;
  border-radius: 50% 50% 17% 35%;
  transform: rotate(35deg);
  -webkit-transform: rotate(35deg); }

.whale-eye {
  display: block;
  position: absolute;
  width: 6px;
  height: 6px;
  background-color: black;
  border-radius: 50%;
  left: 25px;
  top: 40px; }

.whale-eye:after {
  content: '';
  position: absolute;
  width: 3px;
  height: 3px;
  background-color: rgba(255, 255, 255, 0.6);
  right: 0;
  top: 0; }

.whale-eye:before {
  content: '';
  position: absolute;
  top: -2px;
  width: 9px;
  height: 1px;
  border-top: 1px solid black;
  left: 1px;
  transform: rotate(9deg); }

/*# sourceMappingURL=framy.cc.map */
