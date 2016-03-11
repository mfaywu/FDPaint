
 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"


      waveform add -signals /stamp_eraser_tb/status
      waveform add -signals /stamp_eraser_tb/stamp_eraser_synth_inst/bmg_port/CLKA
      waveform add -signals /stamp_eraser_tb/stamp_eraser_synth_inst/bmg_port/ADDRA
      waveform add -signals /stamp_eraser_tb/stamp_eraser_synth_inst/bmg_port/DOUTA
console submit -using simulator -wait no "run"
