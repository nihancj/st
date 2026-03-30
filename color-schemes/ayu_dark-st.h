static const char *colorname[] = {
  /* 8 normal colors */
  [0] = "#1e232b", /* black   */
  [1] = "#ea6c73", /* red     */
  [2] = "#7fd962", /* green   */
  [3] = "#f9af4f", /* yellow  */
  [4] = "#53bdfa", /* blue    */
  [5] = "#cda1fa", /* magenta */
  [6] = "#90e1c6", /* cyan    */
  [7] = "#c7c7c7", /* white   */

  /* 8 bright colors */
  [8]  = "#686868", /* black   */
  [9]  = "#f07178", /* red     */
  [10] = "#aad94c", /* green   */
  [11] = "#ffb454", /* yellow  */
  [12] = "#59c2ff", /* blue    */
  [13] = "#d2a6ff", /* magenta */
  [14] = "#95e6cb", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#0b0e14", /* background */
  [257] = "#bfbdb6", /* foreground */
};
 
/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
unsigned int defaultitalic = 7;
unsigned int defaultunderline = 7;
/*
 * Default shape of cursor
 * 2: Block ("â–ˆ")
 * 4: Underline ("_")
 */
