
   {dede:match}<div id="showinfo">[ÄÚÈİ]</div><ul class="mmlist">{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
{dede:trim replace=""}<font([^>]*)>{/dede:trim}
{dede:trim replace=""}</font>{/dede:trim}
{dede:trim replace=""}<strong([^>]*)>{/dede:trim}
{dede:trim replace=""}</strong>{/dede:trim}
{dede:trim replace=""}<span([^>]*)>{/dede:trim}
{dede:trim replace=""}</span>{/dede:trim}
   {dede:function}$rpstr = "www.piaohua.com";
$mystr = "www.xiaozhizhu.net";
@me = str_replace($rpstr,$mystr,@me);

{/dede:function}
